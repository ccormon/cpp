/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:09:42 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/12 16:11:34 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(const std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack(void);

	private:
		std::string	name;
		Weapon		*weapon;
};

#endif
