/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:40:48 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/31 16:50:24 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	public:
						Animal(std::string type = "random");
						Animal(const Animal &toCopy);
		virtual			~Animal();
		Animal			&operator=(const Animal &toCopy);

		std::string		getType(void) const;

		virtual void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif
