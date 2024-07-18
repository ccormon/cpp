/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:17:16 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/18 16:28:39 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class	Fixed
{
	public:
							Fixed();
							Fixed(const Fixed &toCopy);
							~Fixed();
		Fixed				&operator=(const Fixed &fixed);

							Fixed(const int toConvert);
							Fixed(const float toConvert);

		bool				operator>(const Fixed &fixed);
		bool				operator<(const Fixed &fixed);
		bool				operator>=(const Fixed &fixed);
		bool				operator<=(const Fixed &fixed);
		bool				operator==(const Fixed &fixed);
		bool				operator!=(const Fixed &fixed);

		Fixed				operator+(const Fixed &fixed);
		Fixed				operator-(const Fixed &fixed);
		Fixed				operator*(const Fixed &fixed);
		Fixed				operator/(const Fixed &fixed);

		Fixed				&operator++(void);
		Fixed				&operator--(void);
		Fixed				operator++(int);
		Fixed				operator--(int);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

	private:
		int					rawBits;
		static const int	nbBits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &n);

#endif
