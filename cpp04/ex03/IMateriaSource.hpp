/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:11:43 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/27 12:49:01 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif
