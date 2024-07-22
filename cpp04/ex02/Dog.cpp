/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:03:24 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 17:45:07 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &toCopy): AAnimal(toCopy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->brain = new Brain(*toCopy.brain);
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(const Dog &toCopy)
{
	std::cout << "Dog: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	this->brain = toCopy.brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Woof woof !" << std::endl;
}
