/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:17:49 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/25 17:40:29 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define MAX_ITEMS 4

class	Character: public ICharacter
{
	public:
							Character();
							Character(const Character &toCopy);
							~Character();
		Character			&operator=(const Character &toCopy);

							Character(std::string name);

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

	private:
		std::string	name;
		AMateria	*items[MAX_ITEMS];
		AMateria	*floor;
};

#endif
