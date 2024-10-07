/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:04:08 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/07 15:43:13 by ccormon          ###   ########.fr       */
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
	vectorPair					pairs;
	// int							lastElement = (this->vec.size() % 2 == 0) ? -1 : *this->vec.end();
	std::vector<unsigned int>	insertOrder;

	this->vectorFillPairs(pairs);

	this->vectorMergePairs(pairs);

	// insertOrder = this->vectorDefineInsertOrder(pairs.size(), lastElement);
	// this->vectorInsertElements(pairs, lastElement);
}

void	PmergeMe::fillContainers(char **argv)
{
	for (unsigned int i = 1; argv[i]; i++)
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
	for (unsigned int i = 0; i < this->vec.size(); i += 2)
	{
		if (this->vec[i] > this->vec[i + 1])
			pairs.push_back(std::make_pair(this->vec[i], this->vec[i + 1]));
		else
			pairs.push_back(std::make_pair(this->vec[i + 1], this->vec[i]));
	}

	this->vec.clear();
}

static void	merge(std::vector<unsigned int> &mainChain, unsigned int start, unsigned int middle, unsigned int end)
{
	std::vector<unsigned int>	left(mainChain.begin() + start, mainChain.begin() + middle + 1);
	std::vector<unsigned int>	right(mainChain.begin() + middle + 1, mainChain.begin() + end + 1);

	unsigned int	i = 0;
	unsigned int	j = 0;
	unsigned int	k = start;

	while (i < left.size() && j < right.size())
	{
		if (left[i] <= right[j])
			mainChain[k++] = left[i++];
		else
			mainChain[k++] = right[j++];
	}

	while (i < left.size())
		mainChain[k++] = left[i++];
	
	while (j < right.size())
		mainChain[k++] = right[j++];
}

static void	mergeSort(std::vector<unsigned int> &mainChain, unsigned int start, unsigned int end)
{
	if (start >= end)
		return ;
	unsigned int middle = start + (end - start) / 2;
	mergeSort(mainChain, start, middle);
	mergeSort(mainChain, middle + 1, end);
	merge(mainChain, start, middle, end);
}

void	PmergeMe::vectorMergePairs(vectorPair &pairs)
{
	std::vector<unsigned int>	mainChain;

	for (unsigned int i = 0; i < pairs.size(); i++)
		mainChain.push_back(pairs[i].first);

	mergeSort(mainChain, 0, mainChain.size() - 1);

	vectorPair	tmp;
}

std::vector<unsigned int>	PmergeMe::vectorDefineInsertOrder(unsigned int numberOfPairs, int lastElement)
{
	std::vector<unsigned int>	groupSizes;
	unsigned long long			currentSizesSum;
	unsigned int				powerOfTwo;

	groupSizes.push_back(2);
	currentSizesSum = 2;
	powerOfTwo = 2;

	while (currentSizesSum <= numberOfPairs)
	{
		powerOfTwo *= 2;
		groupSizes.push_back(powerOfTwo - *groupSizes.end());
		currentSizesSum += *groupSizes.end();
	}
	if (lastElement != -1 && currentSizesSum == numberOfPairs)
		groupSizes.push_back(powerOfTwo * 2 - *groupSizes.end());

	std::vector<unsigned int>	indexOrder;
	unsigned int				numberOfElementsLeftInGroup = groupSizes[0];
	unsigned int				smallestIndexInGroup = 1;
	unsigned int				j = 0;

	for (unsigned int i = 0; i < numberOfPairs; i++)
	{
		if (numberOfElementsLeftInGroup == 0)
		{
			j++;
			numberOfElementsLeftInGroup = groupSizes[j];
		}
		indexOrder.push_back(smallestIndexInGroup + groupSizes[j] - numberOfElementsLeftInGroup);
		numberOfElementsLeftInGroup--;
	}

	return (indexOrder);
}

// void	PmergeMe::vectorInsertElements(vectorPair &pairs, int lastElement)
// {

// }
