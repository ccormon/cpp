/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:43:20 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/24 14:02:00 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "iter.hpp"

int	main(void)
{
	const int	intArr[] = {4, 2, 2, 1};
	std::string	strArr[] = {"C est", "quand", "la", "prochaine", "reu-han", "?"};

	iter(intArr, 4, print);
	std::cout << std::endl;
	iter(strArr, 6, print);
	std::cout << std::endl;

	return (0);
}
