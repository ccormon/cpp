/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:33:41 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/29 13:02:08 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade):
	name(name),
	grade(grade)
{
	if (this->grade < GRADE_MAX)
		throw(Bureaucrat::GradeTooHighException());
	else if (this->grade > GRADE_MIN)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy):
	name(toCopy.name),
	grade(toCopy.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &toCopy)
{
	// this->name = toCopy.name;
	this->grade = toCopy.grade;
	return (*this);
}

const std::string	&Bureaucrat::getName() const
{
	return(this->name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->grade <= GRADE_MAX)
		throw(Bureaucrat::GradeTooHighException());
	this->grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->grade >= GRADE_MIN)
		throw(Bureaucrat::GradeTooLowException());
	this->grade++;
}

std::ostream	&operator<<(std::ostream& flux, const Bureaucrat &bureaucrat)
{
	flux << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade();
	return (flux);
}
