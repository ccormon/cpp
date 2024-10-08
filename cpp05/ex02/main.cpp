/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:56:10 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 15:36:40 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testShrubberyCreationForm(void)
{
	Bureaucrat	christelle("Christelle", 138);
	Bureaucrat	ghislaine("Ghislaine", 137);
	AForm		*dumbForm = new ShrubberyCreationForm;

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
	AForm		*dumbForm = new RobotomyRequestForm;

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
	for (int i = 0; i < 10; i++)
		ghislaine.executeFrom(*dumbForm);

	delete dumbForm;
}

void	testPresidentialPardonForm(void)
{
	Bureaucrat	christelle("Christelle", 6);
	Bureaucrat	ghislaine("Ghislaine", 5);
	AForm		*dumbForm = new PresidentialPardonForm;

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

int	main(void)
{
	testShrubberyCreationForm();
	std::cout << std::endl;
	testRobotomyRequestForm();
	std::cout << std::endl;
	testPresidentialPardonForm();

	return (0);
}
