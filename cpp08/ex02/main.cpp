/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:53:47 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/01 11:56:48 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

void	mStack(void)
{
	MutantStack<int>			mstack;
	MutantStack<int>::iterator	it;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(0);


	it = mstack.begin();
	++it;
	--it;
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
}

void	mList(void)
{
	std::list<int>				mlist;
	std::list<int>::iterator	it;
	
	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << "top: " << mlist.back() << std::endl;

	mlist.pop_back();

	std::cout << "size: " << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(42);
	mlist.push_back(0);


	it = mlist.begin();
	++it;
	--it;
	while (it != mlist.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << std::endl;
	while (it != mlist.begin())
	{
		it--;
		std::cout << *it << std::endl;
	}
	std::list<int> s(mlist);
}

int main()
{
	mStack();
	std::cout << std::endl << std::endl;
	mList();
	return 0;
}
