/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:42:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 14:58:21 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	rightAnimal(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // will output the cat sound !
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
}

void	wrongAnimal(void)
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // will output the wrong animal sound !
	meta->makeSound();

	delete meta;
	delete i;
}

int	main(void)
{
	rightAnimal();
	wrongAnimal();

	return (0);
}
