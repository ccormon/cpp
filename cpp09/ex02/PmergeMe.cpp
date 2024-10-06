/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:04:08 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/06 20:16:15 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv)
{
	if (argc < 3)
		throw (std::runtime_error("Not enough arguments"));

	this->fillContainers(argv);
}

PmergeMe::PmergeMe(const PmergeMe &toCopy):
	vec(toCopy.vec),
	deq(toCopy.deq)
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &toCopy)
{
	this->vec = toCopy.vec;
	this->deq = toCopy.deq;
	return (*this);
}

void	PmergeMe::vectorFordJohnson(void)
{
	vectorPair		pair;
	unsigned int	lastElement = (this->vec.size() % 2 == 0) ? -1 : *this->vec.end();

	this->vectorFillPairs(pair);
	this->vectorSortInsidePairs(pair);
	this->vectorMergePairs(pair);
	this->vectorDefineInsertOrder(pair, lastElement);
	this->vectorInsertElements(pair, lastElement);
}

void	PmergeMe::fillContainers(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		char	*end;
		long	value = std::strtol(argv[i], &end, 10);

		if (*end || value < 0 || value > UINT_MAX)
			throw (std::runtime_error("Error"));

		this->vec.push_back(value);
		this->deq.push_back(value);
	}
}

void	PmergeMe::vectorFillPairs(vectorPair &pair)
{
	for (int i = 0; i < this->vec.size(); i + 2)
		pair.push_back(std::make_pair(this->vec[i], this->vec[i + 1]));

	this->vec.clear();
}

void	PmergeMe::vectorSortInsidePairs(vectorPair &pair)
{
	if (pair.size() < 2)
		return ;

}

void	PmergeMe::vectorMergePairs(vectorPair &pair)
{
	if (this->vec.size() < 4)
		return ;


}

void	PmergeMe::vectorDefineInsertOrder(vectorPair &pair, unsigned int lastElement)
{

}

void	PmergeMe::vectorInsertElements(vectorPair &pair, unsigned int lastElement)
{

}
