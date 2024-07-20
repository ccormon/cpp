/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:03:24 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/20 15:30:26 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &toCopy): Animal(toCopy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &toCopy)
{
	std::cout << "Dog: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Woof woof !" << std::endl;
}
