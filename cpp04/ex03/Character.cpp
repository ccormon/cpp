/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:17:38 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/27 17:06:12 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character: Default constructor called" << std::endl;
	this->name = "Someone";
	for (int i = 0; i < MAX_ITEMS; i++)
		this->items[i] = NULL;
	this->floor = NULL;
}

Character::Character(const Character &toCopy)
{
	std::cout << "Character: Copy constructor called" << std::endl;
	this->name = toCopy.name;
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (toCopy.items[i])
			this->items[i] = toCopy.items[i]->clone();
		else
			this->items[i] = NULL;
	}
	this->floor = NULL;
}

Character::~Character(void)
{
	std::cout << "Character: Destructor called" << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
		if (this->items[i])
			delete this->items[i];
	if (this->floor)
		delete this->floor;
}

Character	&Character::operator=(const Character &toCopy)
{
	std::cout << "Character: Copy assigment operator called" << std::endl;
	this->name = toCopy.name;
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (this->items[i])
			delete this->items[i];
		if (toCopy.items[i])
			this->items[i] = toCopy.items[i];
		else
			this->items[i] = NULL;
	}
	return (*this);
}

Character::Character(std::string name)
{
	std::cout << "Character: Name constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < MAX_ITEMS; i++)
		this->items[i] = NULL;
	this->floor = NULL;
}

std::string const	&Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	int	i;

	for (i = 0; i < MAX_ITEMS && this->items[i]; i++);
	if (i < MAX_ITEMS)
	{
		this->items[i] = m->clone();
		std::cout << this->name << " add " << m->getType()
			<< " to his/her stuff" << std::endl;
	}
	else
		std::cout << this->name << " can't add one more item" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < MAX_ITEMS && this->items[idx])
	{
		delete this->floor;
		this->floor = this->items[idx];
		this->items[idx] = NULL;
		std::cout << this->name << " left a " << this->floor->getType()
			<< " on the floor" << std::endl;
		std::cout << "If any other item was already left behind, it is gone for\
ever" << std::endl;
	}
	else
		std::cout << this->name << " hasn't any item at this index"
			<< std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < MAX_ITEMS && this->items[idx])
		this->items[idx]->use(target);
}
