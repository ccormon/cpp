/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:56:57 by ccormon           #+#    #+#             */
/*   Updated: 2024/09/30 15:07:26 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "TEST ADDNUMBER\n";

	Span	sp1 = Span(5);

	try
	{
		std::cout << "Try to add a number : ";
		sp1.addNumber(6);
		std::cout << "OK\n";
		std::cout << "Try to add a number : ";
		sp1.addNumber(3);
		std::cout << "OK\n";
		std::cout << "Try to add a number : ";
		sp1.addNumber(17);
		std::cout << "OK\n";
		std::cout << "Try to add a number : ";
		sp1.addNumber(9);
		std::cout << "OK\n";
		std::cout << "Try to add a number : ";
		sp1.addNumber(11);
		std::cout << "OK\n";
		std::cout << "Try to add a number : ";
		sp1.addNumber(42);
		std::cout << "OK\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "shortestspan = " << sp1.shortestSpan() << std::endl;
		std::cout << "longestspan = " << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nTEST ADDRANGE\n";

	Span				sp2 = Span(6);
	int					numbers_arr[] = {6,3,17,9,11};
	std::vector<int>	numbers_v(numbers_arr, numbers_arr + sizeof(numbers_arr) / sizeof (int));

	try
	{
		std::cout << "Try to add a range of number : ";
		sp2.addRange(numbers_v.begin(), numbers_v.end());
		std::cout << "OK\n";
		std::cout << "Try to add a range of number : ";
		sp2.addRange(numbers_v.begin(), numbers_v.end());
		std::cout << "OK\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "shortestspan = " << sp2.shortestSpan() << std::endl;
		std::cout << "longestspan = " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nTEST MANY NUMBERS\n";

	#define BIG_NUMBERS 100000

	Span				sp3 = Span(BIG_NUMBERS);
	std::vector<int>	vect;
	for (int i = 1; i <= BIG_NUMBERS; i++)
		vect.push_back(i);

	try
	{
		std::cout << "shortestspan = " << sp3.shortestSpan() << std::endl;
		std::cout << "longestspan = " << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
