/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:58:13 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/08 15:25:52 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(const std::string &name, Weapon &weapon);
		void	attack(void);

	private:
		std::string	name;
		Weapon		&weapon;
};

#endif
