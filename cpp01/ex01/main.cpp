/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:50:50 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/08 13:15:06 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		horde_size = 42;
	Zombie	*horde = zombieHorde(horde_size, "Damien");

	for (int i = 0; i < horde_size; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
