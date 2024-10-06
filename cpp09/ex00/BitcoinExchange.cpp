/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:49:00 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/06 15:40:23 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(int argc, char **argv)
{
	if (argc != 2 || !argv)
		throw (std::runtime_error("Too many or not enough arguments. Try : ./btc <input_file>"));

	openInputFile(argv);
	fillDataFile();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &toCopy):
	data(toCopy.data)
{
}

BitcoinExchange::~BitcoinExchange()
{
	this->input.close();
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &toCopy)
{
	this->data = toCopy.data;
	return (*this);
}

static bool	isDateOK(const std::string &date)
{
	if (date.size() < 10)
		return (false);

	for (int i = 0; i < 10; i++)
		if (((i == 4 || i == 7) && date[i] != '-') || (i != 4 && i != 7 && !std::isdigit(date[i])))
			return (false);

	int	year = atoi(date.substr(0, 4).c_str());
	int	month = atoi(date.substr(5, 2).c_str());
	int	day = atoi(date.substr(8, 2).c_str());

	if (year < 2009)
		throw (std::out_of_range("There is no data before 2009"));

	if (month < 1 || month > 12)
		return (false);

	if (day < 1 || day > 31)
		return (false);

	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);

	if (month == 2 && day > 29)
		return (false);

	if (month == 2 && (year % 400 != 0 || (year % 4 != 0 && year % 100 == 0)) && day > 28)
		return (false);

	return (true);
}

static bool	isSeparationOK(const std::string &separation)
{
	if (separation.size() < 3)
		return (false);

	if (separation[0] != ' ' || separation[1] != '|' || separation[2] != ' ')
		return (false);

	return (true);
}

static bool	isValueOK(const std::string &value)
{
	if (value.size() < 1 || value.size() > 4)
		return (false);

	int	nbPoints = 0;

	for (unsigned int i = 0; i < value.size(); i++)
	{
		if (value[i] == '.')
			nbPoints++;
		if ((value[i] != '.' && !std::isdigit(value[i])) || (value[i] == '.' && nbPoints > 1))
			return (false);
	}

	if (atoi(value.c_str()) > 1000)
		return (false);

	return (true);
}

static void	checkLineFormat(const std::string &line)
{
	if (!isDateOK(line))
		throw (std::out_of_range("Invalid date format"));

	if (!isSeparationOK(line.substr(10)))
		throw (std::runtime_error("Invalid format"));

	if (!isValueOK(line.substr(13)))
		throw (std::out_of_range("Invalid value format"));
}

static std::string	normalizeDate(int year, int month, int day)
{
	std::ostringstream oss;

	oss << std::setfill('0')
		<< std::setw(4) << year << "-"
		<< std::setw(2) << month << "-"
		<< std::setw(2) << day;

	return (oss.str());
}

static void	findClosestDate(std::map<std::string, float> &data, const std::string &date, const float value)
{
	int	year = atoi(date.substr(0, 4).c_str());
	int	month = atoi(date.substr(5, 2).c_str());
	int	day = atoi(date.substr(8, 2).c_str());

	for (; year >= 2009; year--)
	{
		for (; month >= 1; month--)
		{
			for (; day >= 1; day--)
			{
				std::string newDate = normalizeDate(year, month, day);

				if (data.find(newDate) != data.end())
				{
					std::cout << date << " => " << value << " = " << data.find(newDate)->second * value << std::endl;
					return ;
				}
			}
			day = 31;
		}
		month = 12;
	}
}

static void	handleLineData(std::map<std::string, float> &data, const std::string &date, const float value)
{
	if (data.find(date) != data.end())
	{
		std::cout << date << " => " << value << " = " << data.find(date)->second * value << std::endl;
		return ;
	}

	findClosestDate(data, date, value);
}

void	BitcoinExchange::analyzeInputFile(void)
{
	std::string	currentLine;

	std::getline(this->input, currentLine);
	while(std::getline(this->input, currentLine))
	{
		try
		{
			checkLineFormat(currentLine);
			handleLineData(this->data, currentLine.substr(0, 10), atof(currentLine.substr(13).c_str()));
		}
		catch(const std::exception& e)
		{
			std::cerr << ERROR << "\"" << currentLine << "\" => " << "ERROR: " << e.what() << '\n' << RESET;
		}
	}
}

void	BitcoinExchange::openInputFile(char **argv)
{
	this->input.open(argv[1], std::ifstream::in);
	if (!this->input)
		throw (std::invalid_argument("<input_file> doesn't exist or permission denied"));
}

void	BitcoinExchange::fillDataFile(void)
{
	std::ifstream	dataFile;

	dataFile.open("data.csv", std::ifstream::in);
	if (!dataFile)
		throw (std::runtime_error("There is no data.csv file in this repository or permission denied"));

	std::string	currentLine;

	std::getline(dataFile, currentLine);
	while (std::getline(dataFile, currentLine))
		this->data.insert(std::make_pair<std::string, float>(currentLine.substr(0, 10), std::atof(currentLine.substr(11).c_str())));

	dataFile.close();
}
