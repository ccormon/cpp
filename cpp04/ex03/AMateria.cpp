/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:56:39 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 18:42:57 by ccormon          ###   ########.fr       */
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
