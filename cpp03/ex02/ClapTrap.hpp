/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:51:06 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/31 15:20:57 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	public:
					ClapTrap(std::string name = "Someone",
						unsigned int hitPoints = 10,
						unsigned int energyPoints = 10,
						unsigned int attackDamage = 0);
					ClapTrap(const ClapTrap &toCopy);
					~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &toCopy);

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
