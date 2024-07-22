/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:05:49 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/22 16:57:49 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define N 100
# define TAB_SIZE 5

class	Brain
{
	public:
				Brain();
				Brain(const Brain &toCopy);
				~Brain();
		Brain	&operator=(const Brain &toCopy);

	protected:
		std::string	ideas[N];
};

#endif
