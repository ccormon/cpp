/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:22:59 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/10 11:13:21 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &toCopy)
{
	(void)toCopy;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &toCopy)
{
	(void)toCopy;
	return (*this);
}

static void	printChar(const std::string &toConvert, char *end, long l)
{
	std::cout << "char: ";

	if (toConvert.length() == 1 && *end)
	{
		if (isprint(*end))
			std::cout << SQUOTE << *end << SQUOTE;
		else
			std::cout << NON_DISPLAYABLE;
	}
	else if (!(*end) && l >=0 && l <= 255)
	{
		if (isprint(l))
			std::cout << SQUOTE << static_cast<char>(l) << SQUOTE;
		else if (l >= 0 && l <= 127)
			std::cout << NON_DISPLAYABLE;
		else
			std::cout << IMPOSSIBLE;
	}
	else
		std::cout << IMPOSSIBLE;

	std::cout << std::endl;
}

static void	printInt(const std::string &toConvert, char *end, long l,
	long double d)
{
	std::cout << "int: ";

	if (toConvert.length() == 1 && *end)
		std::cout << static_cast<int>(*end);
	else if (std::isinf(d))
		std::cout << IMPOSSIBLE;
	else
		std::cout << static_cast<int>(l);

	std::cout << std::endl;
}

static void	printFloat(const std::string toConvert, char *end, long double d)
{
	std::cout << "float: ";

	if (toConvert.length() == 1 && *end)
		std::cout << static_cast<float>(*end) << FLOAT;
	else
		std::cout << static_cast<float>(d) << FLOAT;

	std::cout << std::endl;
}

static void printDouble(const std::string toConvert, char *end, long double d)
{
	std::cout << "double: ";

	if (toConvert.length() == 1 && *end)
		std::cout << static_cast<double>(*end);
	else
		std::cout << static_cast<double>(d);

	std::cout << std::endl;
}

void	ScalarConverter::convert(const std::string &toConvert)
{
	if (toConvert.length() == 0)
	{
		std::cout << "Error: empty string" << std::endl;
		return ;
	}

	char		*end;
	long double	d = strtold(toConvert.c_str(), &end);
	long		l = static_cast<long>(d);

	if (toConvert.length() > 1 && *end && strcmp(end, "f") != 0)
	{
		std::cout << "Error: wrong format" << std::endl;
		return ;
	}

	std::cout << "strtold(toConvert.c_str(), &end) = " << d << "\tend = " << end << std::endl;
	std::cout << "static_cast<long>(d) = " << l << std::endl;

	printChar(toConvert, end, l);
	printInt(toConvert, end, l, d);
	printFloat(toConvert, end, d);
	printDouble(toConvert, end, d);
}
