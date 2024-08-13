/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:19:10 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/13 14:15:33 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <climits>
# include <cfloat>
# include <cstdlib>
# include <cctype>
# include <cstring>
# include <cmath>

# define IMPOSSIBLE "impossible"
# define NON_DISPLAYABLE "non displayable"
# define FLOAT "f"
# define DOT ".0"
# define SQUOTE "'"

class	ScalarConverter
{
	public:
						ScalarConverter();
						ScalarConverter(const ScalarConverter &toCopy);
						~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &toCopy);

		static void		convert(const std::string &toConvert);
};

#endif
