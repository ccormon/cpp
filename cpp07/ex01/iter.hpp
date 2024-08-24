/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:43:42 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/24 14:01:25 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	iter(T *array, int length, void f(T &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	iter(const T *array, int length, void f(const T &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	print(const T &element)
{
	std::cout << element << " ";
}
