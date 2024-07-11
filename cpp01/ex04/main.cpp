/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:09:34 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/10 09:50:17 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		output_filename = filename + ".replace";
	std::string		to_add;
	std::ifstream	input;
	std::ofstream	output;

	if (argc != 4)
	{
		std::cout << "ERROR: Wrong number of arguments.\nPlease enter a command\
 like:\n\t<filename> s1 s2" << std::endl;
		return (1);
	}

	input.open(filename.c_str(), std::ifstream::in);
	if (!input)
	{
		std::cout << "ERROR: " << argv[1]
			<< ": Invalid file or permission denied." << std::endl;
		return (1);
	}

	output.open(output_filename.c_str(), std::ofstream::out);
	if (!output)
	{
		std::cout << "ERROR: " << output_filename
			<< ": Invalid file or permission denied." << std::endl;
		return (1);
	}

	while (std::getline(input, to_add))
		output << to_add << std::endl;

	input.close();
	output.close();

	return (0);
}
