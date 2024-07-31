/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:42:22 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/31 16:58:04 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type):
	type(type)
{
	std::cout << "Animal: Default contructor called" << std::endl;
}

Animal::Animal(const Animal &toCopy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = toCopy;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &toCopy)
{
	std::cout << "Animal: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal: Sooooooon !" << std::endl;
}
