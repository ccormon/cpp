/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:42:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/31 17:21:36 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const AAnimal	*tab[TAB_SIZE];

	// AAnimal	nom;

	for (int i = 0; i < TAB_SIZE; i++)
	{
		if (i <= TAB_SIZE / 2)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < TAB_SIZE; i++)
		delete tab[i];

	return (0);
}
