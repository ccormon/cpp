/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:51:50 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/08 12:58:15 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	public:
		~Zombie();
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	name;
};

Zombie	*newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif
