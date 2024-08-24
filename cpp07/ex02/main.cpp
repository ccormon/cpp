/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:25:37 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/24 15:01:22 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define SIZE 10

int	main(void)
{
	Array<int> arr(SIZE);

	for (int i = 0; i < SIZE; i++)
		arr[i] = i;

	for (int i = 0; i < SIZE; i++)
		std::cout << arr[i] << " ";

	std::cout << std::endl;

	Array<int> arrCpy(arr);
	arrCpy[0] = 42;

	try
	{
		arr[21] = 21;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "arr[0] = " << arr[0] << std::endl;
	std::cout << "arrCpy[0] = " << arrCpy[0] << std::endl;
	std::cout << "size : " << arr.size() << std::endl;
}
