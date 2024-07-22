/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:40:48 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 17:44:39 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal
{
	public:
				AAnimal();
				AAnimal(const AAnimal &toCopy);
		virtual	~AAnimal();
		AAnimal	&operator=(const AAnimal &toCopy);

				AAnimal(std::string type);

				std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;

	protected:
		std::string	type;
};

#endif
