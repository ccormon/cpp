/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:17:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/11 13:22:49 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_first_name(std::string first_name)
{
	this->m_fist_name = first_name;
}

const std::string	Contact::get_first_name(void)
{
	return (this->m_fist_name);
}

void	Contact::set_last_name(std::string last_name)
{
	this->m_last_name = last_name;
}

const std::string	Contact::get_last_name(void)
{
	return (this->m_last_name);
}

void	Contact::set_nickname(std::string nickname)
{
	this->m_nickname = nickname;
}

const std::string	Contact::get_nickname(void)
{
	return (this->m_nickname);
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->m_phone_number = phone_number;
}

const std::string	Contact::get_phone_number(void)
{
	return (this->m_phone_number);
}

void	Contact::set_dark_secret(std::string dark_secret)
{
	this->m_dark_secret = dark_secret;
}

const std::string	Contact::get_dark_secret(void)
{
	return (this->m_dark_secret);
}
