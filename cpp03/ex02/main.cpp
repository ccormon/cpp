/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:50:56 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/24 15:20:06 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fizz("Fizz");
	FragTrap	buzz;
	int			i(0);

	std::cout << std::endl;
	fizz.attack("Buzz");
	buzz.takeDamage(30);
	buzz.beRepaired(42);
	fizz.highFivesGuys();
	std::cout << std::endl;

	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(100);
	buzz.takeDamage(100);
	std::cout << std::endl;

	while (i++ < 100)
		buzz.attack("Meteor");
	std::cout << std::endl;

	return (0);
}
