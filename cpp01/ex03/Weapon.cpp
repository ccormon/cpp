/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:56:18 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/08 15:27:49 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
	this->type = type;
}

const std::string	Weapon::getType(void)
{
	return ((const std::string)(this->type));
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
