/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:17:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/08 10:36:58 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

bool	PhoneBook::add(int index)
{
	std::cout << "Please enter the first name:" << std::endl;
	std::getline(std::cin, this->m_contact[index].m_fist_name);
	std::cout << "Please enter the last name:" << std::endl;
	std::getline(std::cin, this->m_contact[index].m_last_name);
	std::cout << "Please enter the nickname:" << std::endl;
	std::getline(std::cin, this->m_contact[index].m_nickname);
	std::cout << "Please enter the phone number:" << std::endl;
	std::getline(std::cin, this->m_contact[index].m_phone_number);
	std::cout << "Please enter the dark secret (wooooo...):" << std::endl;
	std::getline(std::cin, this->m_contact[index].m_dark_secret);
	std::cout << std::endl;
	if (this->m_contact[index].m_fist_name.empty()
		|| this->m_contact[index].m_last_name.empty()
		|| this->m_contact[index].m_nickname.empty()
		|| this->m_contact[index].m_phone_number.empty()
		|| this->m_contact[index].m_dark_secret.empty())
		return (false);
	return (true);
}

void	PhoneBook::print_in_phonebook(std::string &str)
{
	for (int i = 0; i < 10; i++)
	{
		if (str.size() <= 10)
		{
			if ((size_t)i < str.size())
				std::cout << str[i];
			else
				std::cout << " ";
		}
		else
		{
			if (i < 9)
				std::cout << str[i];
			else
				std::cout << ".";
		}
	}
}

void	PhoneBook::print_phonebook(void)
{
	std::cout << "INDEX     " << "|" << "FIRST NAME" << "|" << "LAST NAME "
		<< "|" << "NICKNAME  " << std::endl;
	for (int index = 0; index < 8; index++)
	{
		std::cout << index << "         " << "|";
		print_in_phonebook(this->m_contact[index].m_fist_name);
		std::cout << "|";
		print_in_phonebook(this->m_contact[index].m_last_name);
		std::cout << "|";
		print_in_phonebook(this->m_contact[index].m_nickname);
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
	if (this->m_contact[index].m_fist_name.empty())
		std::cout << "You don't know how to read a tab ? You're desperate... Th\
ere's no contact with this index !" << std::endl;
	else
	{
		std::cout << "First name: " << this->m_contact[index].m_fist_name
			<< std::endl;
		std::cout << "Last name: " << this->m_contact[index].m_last_name
			<< std::endl;
		std::cout << "Nickname: " << this->m_contact[index].m_nickname << std::endl;
		std::cout << "Phone number: " << this->m_contact[index].m_phone_number
			<< std::endl;
		std::cout << "Dark secret: " << this->m_contact[index].m_dark_secret
			<< std::endl;
	}
	std::cout << std::endl;
}
