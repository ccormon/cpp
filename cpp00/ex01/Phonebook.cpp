/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:17:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/11 13:49:43 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>

bool	PhoneBook::add(int index)
{
	std::string	tmp;

	std::cout << "Please enter the first name:" << std::endl;
	std::getline(std::cin, tmp);
	this->m_contact[index].set_first_name(tmp);
	std::cout << "Please enter the last name:" << std::endl;
	std::getline(std::cin, tmp);
	this->m_contact[index].set_last_name(tmp);
	std::cout << "Please enter the nickname:" << std::endl;
	std::getline(std::cin, tmp);
	this->m_contact[index].set_nickname(tmp);
	std::cout << "Please enter the phone number:" << std::endl;
	std::getline(std::cin, tmp);
	this->m_contact[index].set_phone_number(tmp);
	std::cout << "Please enter the dark secret (wooooo...):" << std::endl;
	std::getline(std::cin, tmp);
	this->m_contact[index].set_dark_secret(tmp);
	std::cout << std::endl;
	if (this->m_contact[index].get_first_name().empty()
		|| this->m_contact[index].get_last_name().empty()
		|| this->m_contact[index].get_nickname().empty()
		|| this->m_contact[index].get_phone_number().empty()
		|| this->m_contact[index].get_dark_secret().empty())
		return (false);
	return (true);
}

void	PhoneBook::print_in_phonebook(const std::string str)
{

	if (str.length() <= 10)
		std::cout << std::setw(10) << std::right << str;
	else
	{
		std::string	too_long = str.substr(0, 9);
		std::cout << std::setw(9) << std::right << too_long << ".";
	}
}

void	PhoneBook::print_phonebook(void)
{
	std::cout << "     INDEX" << "|" << "FIRST NAME" << "|" << " LAST NAME"
		<< "|" << "  NICKNAME" << std::endl;
	for (int index = 0; index < 8; index++)
	{
		std::cout << "         " << index << "|";
		print_in_phonebook(this->m_contact[index].get_first_name());
		std::cout << "|";
		print_in_phonebook(this->m_contact[index].get_last_name());
		std::cout << "|";
		print_in_phonebook(this->m_contact[index].get_nickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int	PhoneBook::index_to_find(std::string s)
{
	if (s == "0")
		return (0);
	else if (s == "1")
		return (1);
	else if (s == "2")
		return (2);
	else if (s == "3")
		return (3);
	else if (s == "4")
		return (4);
	else if (s == "5")
		return (5);
	else if (s == "6")
		return (6);
	else
		return (7);
}

void	PhoneBook::search(void)
{
	std::string to_find;
	int			index;

	print_phonebook();
	std::cout << "Which contact do you want to detail ?" << std::endl;
	std::cout << "Please enter the index of the contact you want" << std::endl;
	std::getline(std::cin, to_find);
	while (!std::cin.eof() && to_find != "0" && to_find != "1" && to_find != "2"
		&& to_find != "3" && to_find != "4" && to_find != "5" && to_find != "6"
		&& to_find != "7")
	{
		std::cout << "You're really dumb, it's official... You don't understand\
what an index is ?" << std::endl;
		std::cout << "Please enter the index of the contact you want"
			<< std::endl;
		std::getline(std::cin, to_find);
	}
	index = index_to_find(to_find);
	std::cout << std::endl;
	if (this->m_contact[index].get_first_name().empty())
		std::cout << "You don't know how to read a tab ? You're desperate... Th\
ere's no contact with this index !" << std::endl;
	else
	{
		std::cout << "First name: " << this->m_contact[index].get_first_name()
			<< std::endl;
		std::cout << "Last name: " << this->m_contact[index].get_last_name()
			<< std::endl;
		std::cout << "Nickname: " << this->m_contact[index].get_nickname()
			<< std::endl;
		std::cout << "Phone number: "
			<< this->m_contact[index].get_phone_number() << std::endl;
		std::cout << "Dark secret: " << this->m_contact[index].get_dark_secret()
			<< std::endl;
	}
	std::cout << std::endl;
}
