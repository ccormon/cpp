/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:53:47 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/27 13:15:27 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define MAX_ITEMS 4

class	ICharacter;

class	AMateria
{
	protected:
		std::string	type;

	public:
							AMateria();
							AMateria(const AMateria &toCopy);
		virtual				~AMateria();
		AMateria			&operator=(const AMateria &toCopy);

							AMateria(std::string const &type);

		std::string const	&getType() const; //Returns the materia type
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
