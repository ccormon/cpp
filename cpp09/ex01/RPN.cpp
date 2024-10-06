/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:49:54 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/06 15:57:39 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool	isOperator(const char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

RPN::RPN(int argc, char **argv)
{
	if (argc != 2 || !argv)
		throw (std::runtime_error("Too many or not enough arguments. Try : ./RPN <expression RPN>"));

	for (int i = 0; i < argv[1][i]; i++)
	{
		if (isdigit(argv[1][i]))
			this->numbers.push(argv[1][i] - '0');
		else if (isOperator(argv[1][i]))
		{
			if (this->numbers.size() < 2)
				throw (std::runtime_error("Operation on a single number"));

			int	a = this->numbers.top();
			this->numbers.pop();
			int	b = this->numbers.top();
			this->numbers.pop();

			if (argv[1][i] == '+')
				this->numbers.push(b + a);
			else if (argv[1][i] == '-')
				this->numbers.push(b - a);
			else if (argv[1][i] == '*')
				this->numbers.push(b * a);
			else if (argv[1][i] == '/')
				this->numbers.push(b / a);
		}
		else if (!isspace(argv[1][i]))
			throw (std::runtime_error("Invalid argument"));
	}

	if (this->numbers.size() != 1)
		throw (std::runtime_error("Not enough operator"));
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
	this->numbers = toCopy.numbers;
	return (*this);
}

void	RPN::printResult(void) const
{
	std::cout << this->numbers.top() << std::endl;
}
