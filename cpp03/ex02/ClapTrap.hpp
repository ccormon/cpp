/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:51:06 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/19 17:19:09 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	public:
					ClapTrap();
					ClapTrap(const ClapTrap &toCopy);
					~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &toCopy);

					ClapTrap(std::string name);
					ClapTrap(std::string name, unsigned int hitPoints,
						unsigned int energyPoints, unsigned int attackDamage);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
};

#endif
