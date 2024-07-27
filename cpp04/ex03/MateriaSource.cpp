/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:29:15 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/27 13:25:23 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource: Default constructor called" << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
		this->itemsLearn[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
	std::cout << "MateriaSource: Copy constructor called" << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
		this->itemsLearn[i] = toCopy.itemsLearn[i];
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource: Destructor called" << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
		if (this->itemsLearn[i])
			delete this->itemsLearn[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &toCopy)
{
	std::cout << "MateriaSource: Copy assigment operator called" << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (this->itemsLearn[i])
			delete this->itemsLearn[i];
		if (toCopy.itemsLearn[i])
			this->itemsLearn[i] = toCopy.itemsLearn[i];
		else
			this->itemsLearn[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;

	int	i;

	for (i = 0; this->itemsLearn[i]; i++);
	if (i < MAX_ITEMS)
	{
		this->itemsLearn[i] = m->clone();
		std::cout << m->getType() << " has been learned" << std::endl;
	}
	else
		std::cout << m->getType() << " can't be learn" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i;

	for (i = MAX_ITEMS - 1; i >= 0; i--)
	{
		if (this->itemsLearn[i] && this->itemsLearn[i]->getType() == type)
		{
			std::cout << type << " has been created" << std::endl;
			return (itemsLearn[i]->clone());
		}
	}
	std::cout << type << " can't be created" << std::endl;
	return (NULL);
}
