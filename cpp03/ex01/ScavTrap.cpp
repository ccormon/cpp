/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:28:50 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/24 16:45:07 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Damien", 100, 50, 20)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = toCopy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &toCopy)
{
	std::cout << "ScavTrap: Copy assigment operator called" << std::endl;
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap: Name constructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->name
			<< " can't attack because he's dead !" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->name
			<< " can't attack because he has no energy points !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target
		<< ", causing " << this->attackDamage << " points of damage !"
		<< std::endl;
	this->energyPoints--;
}

void	ScavTrap::guardGate(void)
{
	if (this->hitPoints > 0)
		std::cout << "ScavTrap " << this->name
			<< " is now in Gate keeper mode !" << std::endl;
	else
		std::cout << "ScavTrap " << this->name
			<< " can't be in Gate keeper mode because he's dead !" << std::endl;
}
