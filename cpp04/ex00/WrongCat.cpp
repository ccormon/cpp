/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:49:19 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 14:55:56 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default contructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &toCopy): WrongAnimal(toCopy)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &toCopy)
{
	std::cout << "WrongCat: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Miaou." << std::endl;
}
