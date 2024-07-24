/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:16:21 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/24 17:31:23 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(const Ice &toCopy): AMateria(toCopy)
{
	std::cout << "Ice: Copy constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice: Destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &toCopy)
{
	std::cout << "Ice: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

AMateria	*Ice::clone() const
{
	AMateria	*ice = new Ice();

	return (ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
		<< std::endl;
}
