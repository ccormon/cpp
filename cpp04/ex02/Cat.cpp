/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:19:46 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 17:45:18 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
	std::cout << "Cat: Default contructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &toCopy): AAnimal(toCopy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->brain = new Brain(*toCopy.brain);
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(const Cat &toCopy)
{
	std::cout << "Cat: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	this->brain = toCopy.brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Meeeeoooooowwwww" << std::endl;
}
