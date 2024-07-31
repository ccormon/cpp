/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:55:25 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/31 15:23:51 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap: Default contructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy)
{
	std::cout << "FragTrap: Copy contructor called" << std::endl;
	*this = toCopy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &toCopy)
{
	std::cout << "FragTrap: Copy assigment operator called" << std::endl;
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hitPoints != 0)
		std::cout << this->name << " wants to high five you guys !\n"
			<< "⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⣧⠈⠛⢿⣿⣿⣿⣿⠏⠀⢻⣿⣿⣿⣿⣿⣿⠿⢿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠙⢿⡿⠃⠀⠀⠘⣿⣿⡿⠟⠉⠀⢀⣿⣿⣿⣿⣿\n\
⣿⠿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠁⠀⠀⠀⠀⠙⠁⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿\n\
⣿⣷⣄⠀⠀⠉⠉⠉⠓⠀⠀⠀⣿⡇⠀⠀⢰⣿⠇⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⢀⣿⡏⠀⠀⣠⣶⠀⠀⠈⠉⠉⢉⣿⣿\n\
⣿⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⣿⣇⠀⣾⡿⠀⢀⣼⡟⠁⠀⠀⠀⠀⢠⣾⣿⣿\n\
⣿⣿⣿⣿⡿⠛⠁⠈⢿⣷⣄⠸⣿⣿⣿⣿⣧⣠⣾⠋⠀⢀⣠⡀⠀⣰⣿⣿⣿⣿\n\
⣿⣿⡿⠋⠀⠀⠀⠀⠀⠹⣿⣶⣿⣿⣿⣿⣿⣿⣿⣤⣴⠿⠋⠁⠀⠹⣿⣿⣿⣿\n\
⣿⣿⣦⣤⣤⣀⣀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠈⢿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠈⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⣤⣤⣤⣤⣄⣀⣀⣙⣿\n\
⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⣸⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣤⣤⣶⣶⣿⣿⣿⣿⣿⡇⢀⣤⡀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢡⣾⣿⣿⣦⡀⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << std::endl;
}
