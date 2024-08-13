/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:24:21 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/13 17:53:25 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	data;

	data.x = 120;
	data.y = 121;
	data.z = 122;

	Data	*ptr(&data);

	std::cout << "x: " << ptr->x << std::endl;
	std::cout << "y: " << ptr->y << std::endl;
	std::cout << "z: " << ptr->z << std::endl;
	std::cout << std::endl;

	uintptr_t	raw(Serializer::serialize(ptr));
	Data		*deserialized(Serializer::deserialize(raw));

	std::cout << "x: " << deserialized->x << std::endl;
	std::cout << "y: " << deserialized->y << std::endl;
	std::cout << "z: " << deserialized->z << std::endl;
}
