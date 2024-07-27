/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:51:39 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/27 17:05:24 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	learn(IMateriaSource *src)
{
	AMateria	*ice = new Ice();
	std::cout << std::endl;
	AMateria	*cure = new Cure();
	std::cout << std::endl;

	src->learnMateria(ice);
	std::cout << std::endl;
	src->learnMateria(cure);
	std::cout << std::endl;

	delete ice;
	std::cout << std::endl;
	delete cure;
	std::cout << std::endl;
}

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();
	std::cout << std::endl;
	ICharacter		*me = new Character("Marie Elodie");
	std::cout << std::endl;
	ICharacter		*bob = new Character("Bob");
	std::cout << std::endl;
	AMateria		*ice;
	std::cout << std::endl;
	AMateria		*cure;
	std::cout << std::endl;
	std::cout << std::endl;

	learn(src);
	std::cout << std::endl;
	ice = src->createMateria("ice");
	std::cout << std::endl;
	cure = src->createMateria("cure");
	std::cout << std::endl;
	std::cout << std::endl;

	me->equip(ice);
	std::cout << std::endl;
	me->equip(cure);
	std::cout << std::endl;
	std::cout << std::endl;

	me->use(0, *bob);
	std::cout << std::endl;
	me->use(1, *bob);
	std::cout << std::endl;
	std::cout << std::endl;

	me->unequip(0);
	std::cout << std::endl;
	me->equip(cure);
	std::cout << std::endl;
	std::cout << std::endl;

	me->use(0, *bob);
	std::cout << std::endl;
	me->use(1, *bob);
	std::cout << std::endl;
	std::cout << std::endl;

	delete bob;
	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete src;
	std::cout << std::endl;
	delete ice;
	std::cout << std::endl;
	delete cure;
	std::cout << std::endl;

	return (0);
}
