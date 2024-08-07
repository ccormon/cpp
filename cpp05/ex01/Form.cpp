/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:30:57 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 15:47:02 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char	*Form::FormAlreadySignedException::what() const throw()
{
	return ("form already signed");
}

Form::Form(std::string name, const unsigned int gradeMinToSign,
		const unsigned int gradeMinToExec):
	name(name),
	isSigned(false),
	gradeMinToSign(gradeMinToSign),
	gradeMinToExec(gradeMinToExec)
{
	if (gradeMinToSign > GRADE_MIN || gradeMinToExec > GRADE_MIN)
		throw(Form::GradeTooLowException());
	else if (gradeMinToSign < GRADE_MAX || gradeMinToExec < GRADE_MAX)
		throw(Form::GradeTooHighException());
}

Form::Form(const Form &toCopy):
	name(toCopy.name),
	isSigned(toCopy.isSigned),
	gradeMinToSign(toCopy.gradeMinToSign),
	gradeMinToExec(toCopy.gradeMinToExec)
{
}

Form::~Form()
{
}

Form	&Form::operator=(const Form &toCopy)
{
	this->isSigned = toCopy.isSigned;
	return (*this);
}

const std::string	&Form::getName(void) const
{
	return (this->name);
}

bool	Form::getIsSigned(void) const
{
	return (this->isSigned);
}

unsigned int	Form::getGradeMinToSign(void) const
{
	return (this->gradeMinToSign);
}

unsigned int	Form::getGradeMinToExec(void) const
{
	return (this->gradeMinToExec);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->isSigned)
		throw(Form::FormAlreadySignedException());
	if (bureaucrat.getGrade() <= this->gradeMinToSign)
	{
		std::cout << bureaucrat << ", sign form " << this->getName()
			<< std::endl;
		this->isSigned = true;
	}
	else
		throw(Form::GradeTooLowException());
}

std::ostream	&operator<<(std::ostream& flux, const Form &form)
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
