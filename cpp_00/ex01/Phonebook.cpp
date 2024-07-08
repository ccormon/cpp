/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:17:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/04 18:31:54 by ccormon          ###   ########.fr       */
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
	if (this->m_contact[index].m_fist_name.empty()
		|| this->m_contact[index].m_last_name.empty()
		|| this->m_contact[index].m_nickname.empty()
		|| this->m_contact[index].m_phone_number.empty()
		|| this->m_contact[index].m_dark_secret.empty())
		return (false);
	return (true);
}

void	PhoneBook::print_phonebook(void)
{
	std::cout << "INDEX     " << "|" << "FIRST NAME" << "|" << "LAST NAME "
		<< "|" << "NICKNAME  " << std::endl;
	for (int index = 0; index < 8; index++)
	{
		std::cout << index << "         " << "|";
		for (int i = 0; i < 10; i++)
		{
			if ((size_t)i < this->m_contact[index].m_fist_name.size())
				std::cout << this->m_contact[index].m_fist_name[i];
			else
				std::cout << " ";
		}
		std::cout << "|";
		for (int i = 0; i < 10; i++)
		{
			if ((size_t)i < this->m_contact[index].m_last_name.size())
				std::cout << this->m_contact[index].m_last_name[i];
			else
				std::cout << " ";
		}
		std::cout << "|";
		for (int i = 0; i < 10; i++)
		{
			if ((size_t)i < this->m_contact[index].m_nickname.size())
				std::cout << this->m_contact[index].m_nickname[i];
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::search(void)
{
	print_phonebook();
}
