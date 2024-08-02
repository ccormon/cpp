/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:13:49 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/02 18:23:20 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const char	*ShrubberyCreationForm::FileCannotBeOpenedException::what() const
		throw()
{
	return ("file cannot be opened");
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	target(target),
	AForm("Shrubbery Creation Form", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm &toCopy):
	target(toCopy.target),
	AForm(toCopy)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(
		const ShrubberyCreationForm &toCopy)
{
	this->target = toCopy.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeMinToExec())
		throw(AForm::GradeTooLowException());
	if (!this->getIsSigned())
		throw(AForm::FormNotSignedException());

	std::string		filename = this->target + "_shrubbery";
	std::ofstream	output;

	output.open(filename.c_str(), std::ofstream::out);
	if (!output)
		throw(ShrubberyCreationForm::FileCannotBeOpenedException());
	output << ASCII_TREES;
	output.close();
}
