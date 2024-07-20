/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:51:16 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/20 09:49:50 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
	this->name = "Dimitri";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;
	return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap: Name constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints,
	unsigned int energyPoints, unsigned int attackDamage)
{
	std::cout << "ClapTrap: Complete constructor called" << std::endl;
	this->name = name;
	this->hitPoints = hitPoints;
	this->energyPoints = energyPoints;
	this->attackDamage = attackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " can't attack because he's dead !" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " can't attack because he has no energy points !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target
		<< ", causing " << this->attackDamage << " points of damage !"
		<< std::endl;
	this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " can't take damages because he's already dead !" << std::endl;
		return ;
	}
	if (amount >= this->hitPoints)
	{
		std::cout << "ClapTrap " << this->name << " take "
			<< this->hitPoints << " damage points !" << std::endl;
		std::cout << "ClapTrap " << this->name << " is dead !" << std::endl;
		this->hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " take " << amount
			<< " damage points !" << std::endl;
		this->hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " can't be repaired because he's dead !" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " can't be repaired because he has no energy points !"
			<< std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " be repaired and gain "
		<< amount << " hit points !" << std::endl;
	this->hitPoints += amount;
}
