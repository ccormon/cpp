/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:22:59 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/08 16:05:11 by ccormon          ###   ########.fr       */
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

static bool	isGoodFormat(const std::string &toConvert)
{

}

void	ScalarConverter::convert(const std::string &toConvert)
{
	if (toConvert.length() == 0)
		return ;

	if (toConvert.length() != 1)
	{
		for (int i = 0; toConvert[i]; i++)
			if (toConvert[i] < 48 || toConvert[i] > 57)
				return ;
	}
	else
		if (toConvert[0] < 32 || toConvert[0] > 126)
			return ;

	char		*end;
	long double	d = strtold(toConvert.c_str(), &end);
	long		l = static_cast<long>(d);

	std::cout << "strtold(toConvert.c_str(), &end) = " << d << "\tend = " << end << std::endl;
	std::cout << "static_cast<long>(d) = " << l << std::endl;
}
