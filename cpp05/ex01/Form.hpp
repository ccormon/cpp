/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:30:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/30 18:31:01 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdbool.h>
# include "Bureaucrat.hpp"

# define GRADE_MAX 1
# define GRADE_MIN 150

class	Bureaucrat;

class	Form
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
							Form(std::string name = "some form",
								bool isSigned = false,
								const unsigned int gradeMinToSign = GRADE_MAX,
								const unsigned int gradeManToExec = GRADE_MAX);
							Form(const Form &toCopy);
							~Form();
		Form				&operator=(const Form &toCopy);

		const std::string	&getName(void) const;
		bool				getIsSigned(void) const;
		const unsigned int	getGradeMinToSign(void) const;
		const unsigned int	getGradeMinToExec(void) const;

		void				beSigned(const Bureaucrat &bureaucrat);

	private:
		const std::string	name;
		bool				isSigned;
		const unsigned int	gradeMinToSign;
		const unsigned int	gradeMinToExec;
}

std::ostream	&operator<<(std::ostream& flux, const Bureaucrat &bureaucrat);

#endif
