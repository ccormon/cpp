/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:35:24 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 13:23:42 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
	AForm("Presidential Pardon Form", 25, 5),
	target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(
	const PresidentialPardonForm &toCopy):
		AForm(toCopy),
		target(toCopy.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(
		const PresidentialPardonForm &toCopy)
{
	this->target = toCopy.target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeMinToExec())
		throw(AForm::GradeTooLowException());
	if (!this->getIsSigned())
		throw(AForm::FormNotSignedException());
	std::cout << this->target << " has been pardonned by Zaphod Beeblebrox"
		<< std::endl;
}
