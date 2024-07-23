/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:17:16 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/23 15:55:27 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
				Fixed();
				Fixed(const Fixed &toCopy);
				~Fixed();
		Fixed	&operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					rawBits;
		static const int	nbBits = 8;
};

#endif
