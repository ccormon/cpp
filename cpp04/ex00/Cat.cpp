/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:19:46 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/20 15:25:27 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat: Default contructor called" << std::endl;
}

Cat::Cat(const Cat &toCopy): Animal(toCopy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &toCopy)
{
	std::cout << "Cat: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Meeeeoooooowwwww" << std::endl;
}
