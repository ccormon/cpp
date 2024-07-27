/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:16:59 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/27 15:14:31 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(const Cure &toCopy): AMateria(toCopy)
{
	std::cout << "Cure: Copy constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure: Destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &toCopy)
{
	std::cout << "Cure: Copy assigment operator called" << std::endl;
	this->type = toCopy.type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria	*cure = new Cure(*this);

	return (cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"
		<< std::endl;
}
