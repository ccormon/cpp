/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:09:34 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/11 16:38:24 by ccormon          ###   ########.fr       */
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
	size_t			found_at;

	if (argc != 4 || s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "ERROR: Wrong number of arguments or wrong format.\nPlease\
 enter a command like:\n\t<filename> s1 s2" << std::endl;
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
	{
		found_at = 0;
		found_at = to_add.find(s1, found_at);
		while (found_at != std::string::npos)
		{
			to_add.erase(found_at, s1.length());
			to_add.insert(found_at, s2);
			found_at = to_add.find(s1, found_at + 1);
		}
		output << to_add << std::endl;
	}

	input.close();
	output.close();

	return (0);
}
