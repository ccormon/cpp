/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:56:39 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/24 17:23:35 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &toCopy)
{
	std::cout << "AMateria: Copy constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria: Destructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &toCopy)
{
	std::cout << "AMateria: Copy assigment operator called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria: Type constructor called" << std::endl;
}

std::string const	&AMateria::getType(void) const
{
	return ((const)this->type);
}

AMateria	*AMateria::clone(void) const
{

}

void	AMateria::use(ICharacter &target)
{

}
