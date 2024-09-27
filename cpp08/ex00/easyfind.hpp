/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:20:09 by ccormon           #+#    #+#             */
/*   Updated: 2024/09/27 19:41:08 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator	foundAt =  std::find(container.begin(), container.end(), toFind);

	if (foundAt == container.end())
		throw (std::runtime_error("not found"));
	return (foundAt);
}
