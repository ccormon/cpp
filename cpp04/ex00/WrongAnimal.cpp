/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:23:33 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/20 16:37:25 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	this->type = "moustico";
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = toCopy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &toCopy)
{
	std::cout << "WrongAnimal: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal: Type constructor called" << std::endl;
	this->type = type;
}

std::string	WrongAnimal::getType()
{
	return (this->type);
}

void	WrongAnimal::makeSound(void)
{
	std::cout << "WrongAnimal: niiiiiiiiiiiiiiiiiii..." << std::endl;
}
