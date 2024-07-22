/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:42:22 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 17:44:22 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal: Default contructor called" << std::endl;
	this->type = "nasique";
}

AAnimal::AAnimal(const AAnimal &toCopy)
{
	std::cout << "AAnimal: Copy constructor called" << std::endl;
	*this = toCopy;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &toCopy)
{
	std::cout << "AAnimal: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "AAnimal: Type constructor called" << std::endl;
	this->type = type;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal: Sooooooon !" << std::endl;
}
