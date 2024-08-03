/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:30:57 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 13:11:06 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char	*AForm::FormAlreadySignedException::what() const throw()
{
	return ("form already signed");
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("form not signed");
}

AForm::AForm(std::string name, const unsigned int gradeMinToSign,
		const unsigned int gradeMinToExec):
	name(name),
	isSigned(false),
	gradeMinToSign(gradeMinToSign),
	gradeMinToExec(gradeMinToExec)
{
	if (gradeMinToSign > GRADE_MIN || gradeMinToExec > GRADE_MIN)
		throw(AForm::GradeTooLowException());
	else if (gradeMinToSign < GRADE_MAX || gradeMinToExec < GRADE_MAX)
		throw(AForm::GradeTooHighException());
}

AForm::AForm(const AForm &toCopy):
	name(toCopy.name),
	isSigned(toCopy.isSigned),
	gradeMinToSign(toCopy.gradeMinToSign),
	gradeMinToExec(toCopy.gradeMinToExec)
{
}

AForm::~AForm()
{
}

AForm	&AForm::operator=(const AForm &toCopy)
{
	this->isSigned = toCopy.isSigned;
	return (*this);
}

const std::string	&AForm::getName(void) const
{
	return (this->name);
}

bool	AForm::getIsSigned(void) const
{
	return (this->isSigned);
}

unsigned int	AForm::getGradeMinToSign(void) const
{
	return (this->gradeMinToSign);
}

unsigned int	AForm::getGradeMinToExec(void) const
{
	return (this->gradeMinToExec);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->isSigned)
		throw(AForm::FormAlreadySignedException());
	if (bureaucrat.getGrade() <= this->gradeMinToSign)
	{
		std::cout << bureaucrat << ", sign form " << this->getName()
			<< std::endl;
		this->isSigned = true;
	}
	else
		throw(AForm::GradeTooLowException());
}

std::ostream	&operator<<(std::ostream& flux, const AForm &form)
{
	if (form.getIsSigned())
		flux << form.getName() << ", form signed with a grade "
			<< form.getGradeMinToSign() << " minimum to sign and a grade "
			<< form.getGradeMinToExec() << " minimum to execute";
	else
		flux << form.getName() << ", form not signed with a grade "
			<< form.getGradeMinToSign() << " minimum to sign and a grade "
			<< form.getGradeMinToExec() << " minimum to execute";
	return (flux);
}
