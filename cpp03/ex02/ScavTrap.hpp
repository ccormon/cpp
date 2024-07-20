/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:29:01 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/20 09:47:52 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
					ScavTrap();
					ScavTrap(const ScavTrap &toCopy);
					~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &toCopy);

					ScavTrap(std::string name);

		void		guardGate(void);

	private:
};

#endif
