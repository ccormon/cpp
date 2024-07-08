/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:54:38 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/08 09:31:38 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

void	print_msg(std::string code)
{
	if (code == "INTRO")
	{
		std::cout << "WELCOME TO YOUR NEW AMAZING PHONEBOOK *** AWPHONE ***"
			<< std::endl;
		std::cout << "To add a contact (max 8), please tap ADD." << std::endl;
		std::cout << "To search a contact in your new amazing phonebook Awphone\
, please tap SEARCH." << std::endl;
		std::cout << "To quit your new amazing phonebook Awphone (that's so sad\
...), please tap EXIT." << std::endl;
	}
	else if (code == "WAIT REQUEST")
		std::cout << "Please enter your request (ADD, SEARCH or EXIT):"
			<< std::endl;
	else if (code == "WRONG INPUT")
		std::cout << "You're really dumb, that's sad... Please retry !"
			<< std::endl << "You can tap ADD, SEARCH or EXIT." << std::endl
			<< std::endl;
	else if (code == "EXIT")
		std::cout << "I heard you leaved your new amazing phonebook Awphone. We\
ll... I hope you'll come back soon. I have some information on you that can int\
erest some people... If I was you, I would come back soon, very soon..."
			<< std::endl;
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int			index = 0;

	print_msg("INTRO");
	print_msg("WAIT REQUEST");
	std::getline(std::cin, input);
	while (!std::cin.eof() && !input.empty() && input != "EXIT")
	{
		if (input == "ADD")
		{
			if (!phonebook.add(index++))
				print_msg("ADD ERROR");
			if (index == 8)
				index = 0;
		}
		else if (input == "SEARCH")
			phonebook.search();
		else if (input != "EXIT")
			print_msg("WRONG INPUT");
		print_msg("WAIT REQUEST");
		std::getline(std::cin, input);
		std::cout << std::endl;
	}
	print_msg("EXIT");
}
