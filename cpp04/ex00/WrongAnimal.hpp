/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:17:48 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/20 16:22:21 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	public:
					WrongAnimal();
					WrongAnimal(const WrongAnimal &toCopy);
					~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal &toCopy);

					WrongAnimal(std::string type);

		std::string	getType(void);
		void		makeSound(void);

	protected:
		std::string	type;
};

#endif
