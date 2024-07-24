/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:54:25 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/24 15:20:39 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
					FragTrap();
					FragTrap(const FragTrap &toCopy);
					~FragTrap();
		FragTrap	&operator=(const FragTrap &toCopy);

					FragTrap(std::string name);

		void		highFivesGuys(void);
};

#endif
