/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:40:48 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/20 15:27:56 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	public:
				Animal();
				Animal(const Animal &toCopy);
				~Animal();
		Animal	&operator=(const Animal &toCopy);

				Animal(std::string type);

				std::string	getType(void) const;

		virtual void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif
