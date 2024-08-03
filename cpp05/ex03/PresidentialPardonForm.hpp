/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:30:01 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 10:35:17 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{
	public:
								PresidentialPardonForm(
										const std::string &target = "42");
								PresidentialPardonForm(
										const PresidentialPardonForm &toCopy);
								~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(
										const PresidentialPardonForm &toCopy);
	
	void						execute(const Bureaucrat &executor) const;

	private:
		std::string	target;
};

#endif
