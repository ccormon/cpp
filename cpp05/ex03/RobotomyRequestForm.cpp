/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:32:57 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 15:41:37 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	AForm("Robotomy Request Form", 72, 45),
	target(target)
{
	std::srand((unsigned)std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy):
	AForm(toCopy),
	target(toCopy.target)
{
	std::srand((unsigned)std::time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(
		const RobotomyRequestForm &toCopy)
{
	this->target = toCopy.target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeMinToExec())
		throw(AForm::GradeTooLowException());
	if (!this->getIsSigned())
		throw(AForm::FormNotSignedException());
	std::cout << "* Some drilling noises *" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "The robotomy on " << this->target << " failed"
			<< std::endl;
}
