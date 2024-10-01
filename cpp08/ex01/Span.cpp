/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:57:16 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/01 11:19:33 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const unsigned int N):
	N(N)
{
}

Span::Span(const Span &toCopy):
	vector(toCopy),
	N(toCopy.N)
{
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &toCopy)
{
	this->Span::vector::operator=(toCopy);
	this->N = toCopy.N;
	return (*this);
}

void	Span::addNumber(int toAdd)
{
	if (this->size() == this->N)
		throw (std::out_of_range("no space left"));
	this->push_back(toAdd);
}

int	Span::shortestSpan(void)
{
	if (this->size() <= 1)
		throw (std::out_of_range("not enough value to find span"));

	int	shortestSpan = this->longestSpan();

	std::sort(this->begin(), this->end());
	for (unsigned int i = 1; i < this->size(); i++)
		shortestSpan = std::min(shortestSpan, (*this)[i] - (*this)[i - 1]);
	return (shortestSpan);
}

int	Span::longestSpan(void) const
{
	if (this->size() <= 1)
		throw (std::out_of_range("not enough value to find span"));
	return (*std::max_element(this->begin(), this->end()) - *std::min_element(this->begin(), this->end()));
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->size() + end - begin > this->N)
		throw (std::out_of_range("not enough space left"));
	this->insert(this->end(), begin, end);
}
