/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:25:05 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/02 18:32:04 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm: public AForm
{
	public:
							RobotomyRequestForm(
									const std::string &target = "42");
							RobotomyRequestForm(
									const RobotomyRequestForm &toCopy);
							~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &toCopy);

		void				execute(const Bureaucrat &executor) const;

	private:
		std::string	target;
};

#endif
