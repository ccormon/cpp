/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:16:55 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 17:45:13 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat: public AAnimal
{
	public:
				Cat();
				Cat(const Cat &toCopy);
				~Cat();
		Cat		&operator=(const Cat &toCopy);

		void	makeSound(void) const;

	private:
		Brain	*brain;
};

#endif
