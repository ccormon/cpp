/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:33:41 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 13:51:48 by ccormon          ###   ########.fr       */
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

void	Bureaucrat::signForm(AForm &toSign)
{
	try
	{
		toSign.beSigned(*this);
	}
	catch(const std::exception &e)
	{
		std::cerr << *this << ", can't sign " << toSign.getName() << " because "
			<< e.what() << '\n';
	}
}

void	Bureaucrat::executeFrom(const AForm &toExecute)
{
	try
	{
		toExecute.execute(*this);
		std::cout << *this << " executed " << toExecute.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << *this << " failed to execute " << toExecute.getName()
			<< " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream& flux, const Bureaucrat &bureaucrat)
{
	flux << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade();
	return (flux);
}
