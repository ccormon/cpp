/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:25:47 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/24 15:15:19 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define INVALID_INDEX "Invalid index"

template <typename T>
class Array
{
	public:
						Array();
						Array(unsigned int n);
						Array(const Array &toCopy);
						~Array();
		Array			&operator=(const Array &toCopy);

		unsigned int	size(void) const;
		T				&operator[](unsigned int index) const;
	
	private:
		T				*array;
		unsigned int	arraySize;
};

template <typename T>
Array<T>::Array():
	array(NULL),
	arraySize(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n):
	array(new T[n]),
	arraySize(n)
{
}

template <typename T>
Array<T>::Array(const Array &toCopy):
	array(new T[toCopy.size()]),
	arraySize(toCopy.size())
{
	for (unsigned int i = 0; i < this->arraySize; i++)
		this->array[i] = toCopy[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &toCopy)
{
	delete[] this->array;
	this->array = new T[toCopy.size()];
	this->arraySize = toCopy.size();
	for (unsigned int i = 0; i < this->arraySize; i++)
		this->array[i] = toCopy[i];
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->arraySize);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index) const
{
	if (index >= this->arraySize)
		throw(std::out_of_range(INVALID_INDEX));
	return (this->array[index]);
}
