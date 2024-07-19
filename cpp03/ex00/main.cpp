/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:50:56 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/19 16:24:53 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	fizz("Fizz");
	ClapTrap	buzz;
	int			i(0);

	std::cout << std::endl;
	fizz.attack("Buzz");
	buzz.takeDamage(0);
	buzz.beRepaired(42);
	std::cout << std::endl;
	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(21);
	std::cout << std::endl;
	while (i++ < 10)
		buzz.attack("Meteor");
	std::cout << std::endl;
	return (0);
}
