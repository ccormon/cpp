/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:04:08 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/06 21:05:43 by ccormon          ###   ########.fr       */
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
	vectorPair		pairs;
	unsigned int	lastElement = (this->vec.size() % 2 == 0) ? -1 : *this->vec.end();

	this->vectorFillPairs(pairs);
	this->vectorSortInsidePairs(pairs);
	this->vectorMergePairs(pairs);
	this->vectorDefineInsertOrder(pairs, lastElement);
	this->vectorInsertElements(pairs, lastElement);
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

void	PmergeMe::vectorFillPairs(vectorPair &pairs)
{
	for (int i = 0; i < this->vec.size(); i + 2)
		pairs.push_back(std::make_pair(this->vec[i], this->vec[i + 1]));

	this->vec.clear();
}

void	PmergeMe::vectorSortInsidePairs(vectorPair &pairs)
{
	if (pairs.size() < 2)
		return ;


}

void	PmergeMe::vectorMergePairs(vectorPair &pairs)
{

}

std::vector<unsigned int>	PmergeMe::vectorDefineInsertOrder(vectorPair &pairs, unsigned int lastElement)
{
	std::vector<unsigned int>	groupSizes;
	unsigned long long			currentSizesSum;
	unsigned int				powerOfTwo;

	groupSizes.push_back(2);
	currentSizesSum = 2;
	powerOfTwo = 2;

	while (currentSizesSum <= pairs.size())
	{
		powerOfTwo *= 2;
		groupSizes.push_back(powerOfTwo - *groupSizes.end());
		currentSizesSum += *groupSizes.end();
	}

	std::vector<unsigned int>	indexOrder;

	for (int i = 0; i < groupSizes.size(); i++)
	{

	}

	return (indexOrder);
}

void	PmergeMe::vectorInsertElements(vectorPair &pairs, unsigned int lastElement)
{

}
