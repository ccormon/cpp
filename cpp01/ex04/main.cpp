/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:09:34 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/09 11:28:18 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		output_filename;
	std::string		to_add;

	if (argc != 4)
	{
		std::cout << "ERROR: Wrong number of arguments.\nPlease enter a command\
 like:\n\t<filename> s1 s2" << std::endl;
		return (1);
	}

	input.open(argv[1], std::ifstream::in);
	if (input.failbit)
	{
		std::cout << "ERROR: " << argv[1]
			<< ": Invalid file or permission denied." << std::endl;
		return (1);
	}

	output_filename = argv[1];
	output_filename += ".replace";
	output.open(output_filename.c_str(), std::ofstream::out);
	if (output.failbit)
	{
		std::cout << "ERROR: " << output_filename
			<< ": Invalid file or permission denied." << std::endl;
		return (1);
	}

	while (std::getline(input, to_add))
		output << to_add;

	input.close();
	output.close();

	return (0);
}
