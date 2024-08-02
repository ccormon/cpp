/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:32:57 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/02 18:44:03 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	target(target),
	AForm("Robotomy Request Form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy):
	target(toCopy.target),
	AForm(toCopy)
{
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

void	RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	if (executor.getGrade() > this->getGradeMinToExec())
		throw(AForm::GradeTooLowException());
	if (!this->getIsSigned())
		throw(AForm::FormNotSignedException());
	
}
