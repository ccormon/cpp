/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:23:08 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/27 12:45:54 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
	public:
						MateriaSource();
						MateriaSource(const MateriaSource &toCopy);
						~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &toCopy);

		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);

	private:
		AMateria	*itemsLearn[MAX_ITEMS];
};

#endif
