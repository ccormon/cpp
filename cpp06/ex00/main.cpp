/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:18:27 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/04 17:19:41 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Please enter a command like:\n\t./conversion <to convert>"
			<< std::endl;
		return (1);
	}

	// std::cout << "float max: " << FLT_MAX << std::endl;
	// std::cout << "float min: " << FLT_MIN << std::endl;
	// std::cout << "double max: " << DBL_MAX << std::endl;
	// std::cout << "double min: " << DBL_MIN << std::endl;
	// std::cout << "long double max: " << LDBL_MAX << std::endl;
	// std::cout << "long double min: " << LDBL_MIN << std::endl;

	ScalarConverter::convert(argv[1]);
	return (0);
}
