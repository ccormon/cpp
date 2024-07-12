/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:56:18 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/12 16:09:55 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
	this->type = type;
}
Weapon::~Weapon()
{
}

const std::string	Weapon::getType(void)
{
	return ((const std::string)(this->type));
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
