/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:16:00 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 18:20:58 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

class	Ice
{
	public:
			Ice();
			Ice(const Ice &toCopy);
			~Ice();
		Ice	&operator=(const Ice &toCopy);
};

#endif
