/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:22:59 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/08 18:17:31 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &toCopy)
{
	(void)toCopy;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &toCopy)
{
	(void)toCopy;
	return (*this);
}

void	ScalarConverter::convert(const std::string &toConvert)
{
	if (toConvert.length() == 0)
	{
		std::cout << "Error: empty string" << std::endl;
		return ;
	}

	char		*end;
	long double	d = strtold(toConvert.c_str(), &end);
	long		l = static_cast<long>(d);

	if (*end)
	{
		if (toConvert.length() != 1)
		{
			std::string test = end;

			if (test != "f")
			{
				std::cout << "Error: wrong format" << std::endl;
				return ;
			}
		}
		else
		{
			if (*end < 32 || *end > 126)
			{
				std::cout << "Error: non displayable character" << std::endl;
				return ;
			}
		}
	}

	std::cout << "strtold(toConvert.c_str(), &end) = " << d << "\tend = " << end << std::endl;
	std::cout << "static_cast<long>(d) = " << l << std::endl;
}
