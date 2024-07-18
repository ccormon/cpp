/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:17:16 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/18 14:51:33 by ccormon          ###   ########.fr       */
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
		Fixed	&operator=(const Fixed &fixed);

		Fixed(const int toConvert);
		Fixed(const float toConvert);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					rawBits;
		static const int	nbBits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &n);

#endif
