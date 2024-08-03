/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:46:52 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 15:28:26 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &toCopy)
{
	(void)toCopy;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &toCopy)
{
	(void)toCopy;
	return (*this);
}

static AForm	*makeShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm	*makeRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*makePresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	AForm	*(*creationForms[])(const std::string &target) =
	{
		&makeShrubberyCreationForm,
		&makeRobotomyRequestForm,
		&makePresidentialPardonForm
	};
	std::string	forms[] =
	{
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == name)
		{
			std::cout << "Intern create " << name << std::endl;
			return (creationForms[i](target));
		}
	}

	std::cout << "Intern can't create " << name << std::endl;
	return (NULL);
}
