/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:16:07 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/08 10:33:38 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
		bool	add(int index);
		void	search(void);
		void	print_in_phonebook(std::string &str);
		void	print_phonebook(void);
		int	index_to_find(std::string s);

	private:
		Contact	m_contact[8];
};

#endif
