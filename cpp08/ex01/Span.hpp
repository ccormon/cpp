/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:57:09 by ccormon           #+#    #+#             */
/*   Updated: 2024/09/30 11:50:22 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <stdexcept>
#include <algorithm>

class	Span: protected std::vector<int>
{
	public:
				Span(const unsigned int N = 0);
				Span(const Span &toCopy);
				~Span();
		Span	&operator=(const Span &toCopy);

		void	addNumber(int toAdd);
		int		shortestSpan(void);
		int		longestSpan(void) const;
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	private:
		unsigned int	N;
};
