/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:49:31 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/02 13:58:31 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <stdbool.h>
# include "Bureaucrat.hpp"

# define GRADE_MAX 1
# define GRADE_MIN 150

class	Bureaucrat;

class	AForm
{
	class	GradeTooHighException: public std::exception
	{
		public:
			const char	*what() const throw();
	};

	class	GradeTooLowException: public std::exception
	{
		public:
			const char	*what() const throw();
	};

	public:
							AForm(std::string name = "some form",
								const unsigned int gradeMinToSign = GRADE_MAX,
								const unsigned int gradeManToExec = GRADE_MAX);
							AForm(const Form &toCopy);
		virtual				~AForm();
		AForm				&operator=(const Form &toCopy);

		const std::string	&getName(void) const;
		bool				getIsSigned(void) const;
		unsigned int		getGradeMinToSign(void) const;
		unsigned int		getGradeMinToExec(void) const;

		void				beSigned(const Bureaucrat &bureaucrat) = 0;

	private:
		const std::string	name;
		bool				isSigned;
		unsigned int		gradeMinToSign;
		unsigned int		gradeMinToExec;
};

std::ostream	&operator<<(std::ostream& flux, const AForm &aform);

#endif
