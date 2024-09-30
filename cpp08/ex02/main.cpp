/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:53:47 by ccormon           #+#    #+#             */
/*   Updated: 2024/09/30 15:11:52 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int	main(void)
{
	MutantStack<int>			mstack;
	MutantStack<int>::iterator	it;
	
	mstack.push(1);
	mstack.push(2);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(4);
	mstack.push(8);
	mstack.push(16);
	mstack.push(32);
	mstack.push(64);

	it = mstack.begin();
	while (it != mstack.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << std::endl;
	while (it != mstack.begin())
	{
		it--;
		std::cout << *it << std::endl;
	}

	std::stack<int> s(mstack);

	return (0);
}
