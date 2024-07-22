/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:43:01 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 14:59:42 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
					WrongCat();
					WrongCat(const WrongCat &toCopy);
					~WrongCat();
		WrongCat	&operator=(const WrongCat &toCopy);

		void		makeSound(void) const;
};

#endif
