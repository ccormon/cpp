/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:04:02 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/06 20:48:27 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <stdexcept>
#include <cstdlib>
#include <climits>

typedef std::vector< std::pair<unsigned int, unsigned int> > vectorPair;
typedef std::deque< std::pair<unsigned int, unsigned int> > dequePair;

class	PmergeMe
{
	public:
					PmergeMe(int argc = 0, char **argv = NULL);
					PmergeMe(const PmergeMe &toCopy);
					~PmergeMe();
		PmergeMe	&operator=(const PmergeMe &toCopy);

		void		vectorFordJohnson(void);
		void		dequeFordJohnson(void);

	private:
		std::vector<unsigned int>	vec;
		std::deque<unsigned int>	deq;

		void	fillContainers(char **argv);
		void	vectorFillPairs(vectorPair &pairs);
		void	vectorSortInsidePairs(vectorPair &pairs);
		void	vectorMergePairs(vectorPair &pairs);
		std::vector<unsigned int>	vectorDefineInsertOrder(vectorPair &pairs, unsigned int lastElement);
		void	vectorInsertElements(vectorPair &pairs, unsigned int lastElement);
};
