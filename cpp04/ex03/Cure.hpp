/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:16:40 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/27 12:48:43 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure: public AMateria
{
	public:
				Cure();
				Cure(const Cure &toCopy);
				~Cure();
		Cure	&operator=(const Cure &toCopy);

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
