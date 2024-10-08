/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:49:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/06 15:57:49 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stack>
#include <stdexcept>
#include <stdbool.h>
#include <iostream>

class	RPN
{
	public:
				RPN(int argc = 0, char **argv = NULL);
				RPN(const RPN &toCopy);
				~RPN();
		RPN		&operator=(const RPN &toCopy);

		void	printResult(void) const;

	private:
		std::stack<long long>	numbers;
};
