/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:46:01 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/13 17:53:44 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

typedef struct SData
{
	int	x;
	int	y;
	int	z;
}	Data;


class	Serializer
{
	private:
					Serializer();
					Serializer(const Serializer &toCopy);
		Serializer	&operator=(const Serializer &toCopy);

	public:
							~Serializer();

		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

// uintptr_t:
//  Integer type capable of holding a value converted from a void pointer and
//  then be converted back to that type with a value that compares equal to the
//  original pointer.
//  Optional: These typedefs may not be defined in some library implementations.

#endif
