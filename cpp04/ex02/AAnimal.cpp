/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:42:22 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/31 17:11:45 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type):
	type(type)
{
	std::cout << "AAnimal: Default contructor called" << std::endl;
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

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal: Sooooooon !" << std::endl;
}
