/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:18:36 by ccormon           #+#    #+#             */
/*   Updated: 2024/09/27 19:48:49 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <math.h>

#define SIZE_MAX 10

int	main(void)
{
	std::vector<int>	vect;
	std::deque<int>		dequ;
	std::list<int>		list;

	for (int i = 0; i < SIZE_MAX; i++)
	{
		int	powerOfTwo = pow(2, i);
		vect.push_back(powerOfTwo);
		dequ.push_back(powerOfTwo);
		list.push_back(powerOfTwo);
	}

	int	testKO = 0;
	int	testOK = 128;

	try
	{
		std::cout << "Searching " << testKO << " in vector : " << *easyfind(vect, testKO) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Searching " << testOK << " in vector : " << *easyfind(vect, testOK) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Searching " << testKO << " in deque : " << *easyfind(dequ, testKO) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Searching " << testOK << " in deque : " << *easyfind(dequ, testOK) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Searching " << testKO << " in list : " << *easyfind(list, testKO) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Searching " << testOK << " in list : " << *easyfind(list, testOK) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
