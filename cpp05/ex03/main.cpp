/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:56:10 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 15:25:02 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	testShrubberyCreationForm(void)
{
	Bureaucrat	christelle("Christelle", 138);
	Bureaucrat	ghislaine("Ghislaine", 137);
	Intern		florian;
	AForm		*dumbForm = florian.makeForm("ShrubberyCreationForm", "Rouen");

	std::cout << christelle << ", try to execute " << dumbForm->getName()
		<< std::endl;
	christelle.executeFrom(*dumbForm);

	std::cout << ghislaine << ", try to execute " << dumbForm->getName()
		<< std::endl;
	ghislaine.executeFrom(*dumbForm);

	std::cout << ghislaine << ", try to sign " << dumbForm->getName()
		<< std::endl;
	ghislaine.signForm(*dumbForm);

	std::cout << ghislaine << ", try to execute " << dumbForm->getName()
		<< std::endl;
	ghislaine.executeFrom(*dumbForm);

	delete dumbForm;
}

void	testRobotomyRequestForm(void)
{
	Bureaucrat	christelle("Christelle", 46);
	Bureaucrat	ghislaine("Ghislaine", 45);
	Intern		florian;
	AForm		*dumbForm = florian.makeForm("RobotomyRequestForm", "Rouen");

	std::cout << christelle << ", try to execute " << dumbForm->getName()
		<< std::endl;
	christelle.executeFrom(*dumbForm);

	std::cout << ghislaine << ", try to execute " << dumbForm->getName()
		<< std::endl;
	ghislaine.executeFrom(*dumbForm);

	std::cout << ghislaine << ", try to sign " << dumbForm->getName()
		<< std::endl;
	ghislaine.signForm(*dumbForm);

	std::cout << ghislaine << ", try to execute " << dumbForm->getName()
		<< std::endl;
	ghislaine.executeFrom(*dumbForm);

	delete dumbForm;
}

void	testPresidentialPardonForm(void)
{
	Bureaucrat	christelle("Christelle", 6);
	Bureaucrat	ghislaine("Ghislaine", 5);
	Intern		florian;
	AForm		*dumbForm = florian.makeForm("PresidentialPardonForm", "Rouen");

	std::cout << christelle << ", try to execute " << dumbForm->getName()
		<< std::endl;
	christelle.executeFrom(*dumbForm);

	std::cout << ghislaine << ", try to execute " << dumbForm->getName()
		<< std::endl;
	ghislaine.executeFrom(*dumbForm);

	std::cout << ghislaine << ", try to sign " << dumbForm->getName()
		<< std::endl;
	ghislaine.signForm(*dumbForm);

	std::cout << ghislaine << ", try to execute " << dumbForm->getName()
		<< std::endl;
	ghislaine.executeFrom(*dumbForm);

	delete dumbForm;
}

void	testRandomForm(void)
{
	Intern	florian;
	AForm	*dumbForm = florian.makeForm("RandomForm", "Rouen");

	delete dumbForm;
}

int	main(void)
{
	testShrubberyCreationForm();
	std::cout << std::endl;
	testRobotomyRequestForm();
	std::cout << std::endl;
	testPresidentialPardonForm();
	std::cout << std::endl;
	testRandomForm();

	return (0);
}
