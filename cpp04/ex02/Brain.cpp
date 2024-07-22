/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:20:20 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 16:54:17 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default contructor called" << std::endl;
}

Brain::Brain(const Brain &toCopy)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = toCopy;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &toCopy)
{
	std::cout << "Brain: Copy assigment operator called" << std::endl;
	for (int i = 0; i < TAB_SIZE; i++)
		this->ideas[i] = toCopy.ideas[i];
	return (*this);
}
