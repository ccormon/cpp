/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:17:16 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/15 14:58:20 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &to_copy);
		~Fixed();
		Fixed	&operator=(const Fixed &to_copy);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					rawBits;
		static const int	nbBits = 8;
};

#endif
