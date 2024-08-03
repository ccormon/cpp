/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:00:24 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 15:25:53 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
				Intern();
				Intern(const Intern &toCopy);
				~Intern();
		Intern	&operator=(const Intern &toCopy);

		AForm	*makeForm(const std::string &name, const std::string &target);
};

#endif
