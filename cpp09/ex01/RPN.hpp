/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:49:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/05 15:41:20 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stack>
#include <stdexcept>
#include <cstdbool>

class	RPN
{
	public:
			RPN(int argc, char **argv);
			RPN(const RPN &toCopy);
			~RPN();
		RPN	&operator=(const RPN &toCopy);

	private:
		std::stack<int>	numbers;
};
