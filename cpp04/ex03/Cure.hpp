/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:16:40 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 18:22:01 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

class	Cure
{
	public:
				Cure();
				Cure(const Cure &toCopy);
				~Cure();
		Cure	&operator=(const Cure &toCopy);
}

#endif
