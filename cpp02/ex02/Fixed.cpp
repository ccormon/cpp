/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:17:53 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/18 16:34:56 by ccormon          ###   ########.fr       */
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

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	rawBits = fixed.getRawBits();
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
	rawBits = roundf(toConvert * float(1 << nbBits));
}

bool	Fixed::operator>(const Fixed &fixed)
{
	return (rawBits > fixed.rawBits);
}

bool	Fixed::operator<(const Fixed &fixed)
{
	return (rawBits < fixed.rawBits);
}

bool	Fixed::operator>=(const Fixed &fixed)
{
	return (rawBits >= fixed.rawBits);
}

bool	Fixed::operator<=(const Fixed &fixed)
{
	return (rawBits <= fixed.rawBits);
}

bool	Fixed::operator==(const Fixed &fixed)
{
	return (rawBits == fixed.rawBits);
}

bool	Fixed::operator!=(const Fixed &fixed)
{
	return (rawBits != fixed.rawBits);
}

Fixed	Fixed::operator+(const Fixed &fixed)
{
	Fixed	result;

	result.rawBits = rawBits + fixed.rawBits;
	return (result);
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	result;

	result.rawBits = rawBits - fixed.rawBits;
	return (result);
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed	result;

	result.rawBits = (long(rawBits) * long(fixed.rawBits)) >> nbBits;
	return (result);
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	result;

	result.rawBits = (long(rawBits) << nbBits) / fixed.rawBits;
	return (result);
}

Fixed	&operator++(void)
{
	++rawBits;
	return (*this);
}

Fixed	&operator--(void)
{
	--rawBits;
	return (*this);

}

Fixed	operator++(int)
{
	Fixed	tmp = *this;

	rawBits++;
	return (tmp);
}

Fixed	operator--(int)
{
	Fixed	tmp = *this;

	rawBits--
	return (tmp);
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
	return (rawBits / float(1 << nbBits));
}

int	Fixed::toInt(void) const
{
	return (rawBits >> nbBits);
}

static Fixed		&min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

static Fixed		&max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

static const Fixed	&min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

static const Fixed	&max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &n)
{
	out << n.toFloat();
	return (out);
}
