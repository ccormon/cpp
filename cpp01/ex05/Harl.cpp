/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:41:49 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/12 14:48:08 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pic\
kle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did\
n't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've bee\
n coming for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	bool		option_is_ok = false;
	void		(Harl::*option[4])(void) = {&Harl::debug, &Harl::info,
					&Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (level == tab[i])
		{
			(this->*option[i])();
			option_is_ok = true;
		}
	if (!option_is_ok)
		std::cout << "The option " << level << " doesn't exist." << std::endl;
}
