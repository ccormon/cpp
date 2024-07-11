/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:22:14 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/11 13:23:09 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact
{
	public:
		void				set_first_name(std::string first_name);
		const std::string	get_first_name(void);
		void				set_last_name(std::string last_name);
		const std::string	get_last_name(void);
		void				set_nickname(std::string nickname);
		const std::string	get_nickname(void);
		void				set_phone_number(std::string phone_number);
		const std::string	get_phone_number(void);
		void				set_dark_secret(std::string dark_secret);
		const std::string	get_dark_secret(void);

	private:
		std::string	m_fist_name;
		std::string	m_last_name;
		std::string	m_nickname;
		std::string	m_phone_number;
		std::string	m_dark_secret;
};

#endif
