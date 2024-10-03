/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:25:31 by ccormon           #+#    #+#             */
/*   Updated: 2024/10/03 19:51:18 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept>
#include <stdbool.h>
#include <cstdlib>
#include <sstream>
#include <iomanip>

#define GREEN RESET "\e[38;2;210;210;0m"
#define PURPLE RESET "\e[38;2;170;50;170;1m"
#define ERROR RESET "\e[38;2;224;17;95;1m"
#define HIGHLIGHTED_ERROR RESET "\e[38;2;235;235;235;1m" "\e[48;2;224;17;95m"
#define RESET "\e[0m"

class	BitcoinExchange
{
	public:
						BitcoinExchange(int argc = 0, char **argv = NULL);
						BitcoinExchange(const BitcoinExchange &toCopy);
						~BitcoinExchange();
		BitcoinExchange	&operator=(const BitcoinExchange &toCopy);

		void			analyzeInputFile(void);

	private:
		std::ifstream					input;
		std::map<std::string, float>	data;

		void	openInputFile(char **argv);
		void	fillDataFile(void);
};
