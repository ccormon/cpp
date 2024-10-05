/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:49:54 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/05 15:43:34 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(int argc, char **argv)
{
	if (argc != 2)
		throw (std::runtime_error("Too many or not enough arguments. Try : ./RPN <expression RPN>"));

	parseArg(*argv[1]);
}

RPN::RPN(const RPN &toCopy):
	numbers(toCopy.numbers)
{
}

RPN::~RPN()
{
}

RPN	&RPN::operator=(const RPN &toCopy)
{
	*this = toCopy;
	return (*this);
}

static bool	isOperator(const char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

static void	parseArg(char *arg)
{
	for (int i = 0; i < arg[1][i]; i++)
		if (!isspace(arg[i]) && !isdigit(arg[i]) && !isOperator(arg[i]))
			throw (std::runtime_error("Invalid argument"));
}
