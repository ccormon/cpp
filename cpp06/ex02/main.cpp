/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:17:36 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/15 12:03:47 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int	main(void)
{
	std::srand(time(NULL));

	Base	*x(generate());
	Base	*y(generate());
	Base	*z(generate());

	identify(x);
	identify(y);
	identify(z);

	std::cout << std::endl;

	identify(*x);
	identify(*y);
	identify(*z);
	
	delete x;
	delete y;
	delete z;
}
