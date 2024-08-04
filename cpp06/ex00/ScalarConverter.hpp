/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:19:10 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/04 17:14:08 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <climits>
# include <cfloat>
# include <cstdlib>

# define IMPOSSIBLE "impossible"
# define NON_DISPLAYABLE "non displayable"
# define NAN "nan"
# define NANF "nanf"
# define NEG_INF "-inf"
# define POS_INF "+inf"
# define NEG_INFF "-inff"
# define POS_INFF "+inff"
# define FLOAT "f"
# define DECIMAL ".0"
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
