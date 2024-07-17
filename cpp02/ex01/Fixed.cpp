/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:17:53 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/17 21:33:54 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	rawBits = 0;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	rawBits = toCopy.getRawBits();
	return (*this);
}

Fixed::Fixed(const int toConvert)
{
	std::cout << "Int constructor called" << std::endl;
	rawBits = toConvert << nbBits;
}

Fixed::Fixed(const float toConvert)
{
	std::cout << "Float constructor called" << std::endl;
	rawBits = roundf(toConvert * (1 << nbBits));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return (rawBits / (1 << nbBits));
}

int	Fixed::toInt(void) const
{
	return (rawBits >> nbBits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &n)
{
	out << n.toFloat();
	return (out);
}
