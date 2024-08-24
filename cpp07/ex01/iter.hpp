/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:43:42 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/24 11:59:57 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	iter(T *array, size_t length, f(T &))
{
	for (size_t i = 0; i < length, i++)
		f(array[i]);
}

template <typename T>
