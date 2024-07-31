/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:00:32 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/31 16:50:41 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class	Dog: public Animal
{
	public:
				Dog();
				Dog(const Dog &toCopy);
				~Dog();
		Dog		&operator=(const Dog &toCopy);

		void	makeSound(void) const;
};

#endif
