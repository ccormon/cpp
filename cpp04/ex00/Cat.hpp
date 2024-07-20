/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:16:55 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/20 15:25:23 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
				Cat();
				Cat(const Cat &toCopy);
				~Cat();
		Cat		&operator=(const Cat &toCopy);

		void	makeSound(void) const;
};

#endif
