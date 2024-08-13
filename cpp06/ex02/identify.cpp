/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:33:50 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/13 18:38:35 by ccormon          ###   ########.fr       */
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

}

void	identify(Base &p)
{

}
