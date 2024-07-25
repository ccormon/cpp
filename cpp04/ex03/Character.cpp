/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:17:38 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/25 17:46:42 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): Character("Someone")
{
	std::cout << "Character: Default constructor called" << std::endl;
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
	for (int i = 0; this->floor && this->floor[i]; i++)
		delete this->floor[i];
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
}

Character::Character(std::string name)
{
	std::cout << "Character: Name constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < MAX_ITEMS; i++)
		this->items[i] = NULL;
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
		std::cout << this->name << " can't add one more item" << std::endl;
	}
	else
		std::cout << this->name << " add " << m->getType()
			<< " to his/her stuff" << std::endl;
}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < MAX_ITEMS && this->items[idx])
		this->items[idx]->use(target);
}
