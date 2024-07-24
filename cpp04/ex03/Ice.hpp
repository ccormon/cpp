/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:16:00 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/24 17:30:39 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice: public AMateria
{
	public:
					Ice();
					Ice(const Ice &toCopy);
					~Ice();
		Ice			&operator=(const Ice &toCopy);

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
