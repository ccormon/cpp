/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:57:09 by ccormon           #+#    #+#             */
/*   Updated: 2024/09/28 10:13:42 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class	Span
{
	public:
				Span(const unsigned int N = 0);
				Span(const Span &toCopy);
				~Span();
		Span	&operator=(const Span &toCopy);

	private:
		unsigned int	N;
};
