/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:22:59 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/04 16:38:44 by ccormon          ###   ########.fr       */
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
	char		*end;
	long double	d = strtold(toConvert.c_str(), &end);
	long		l = static_cast<long>(d);

	std::cout << "strtold(toConvert.c_str(), &end) = " << d << "\tend = " << end << std::endl;
	std::cout << "static_cast<long>(d) = " << l << std::endl;
}
