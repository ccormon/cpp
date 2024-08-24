/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:33:50 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/15 12:05:57 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base	*generate(void)
{
	int	n = std::rand() % 3;

	if (n == 0)
		return (new A);
	else if (n == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cerr << "Error";
	std::cout << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch(const std::exception &e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B";
		}
		catch(const std::exception &e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C";
			}
			catch(const std::exception &e)
			{
				std::cerr << "Error";
			}
		}
	}
	std::cout << std::endl;
}
