/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:30:45 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/03 15:47:58 by ccormon          ###   ########.fr       */
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
	public:
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

		class	FormAlreadySignedException: public std::exception
		{
			public:
				const char	*what() const throw();
		};

		class	FormNotSignedException: public std::exception
		{
			public:
				const char	*what() const throw();
		};

							AForm(std::string name = "some form",
								const unsigned int gradeMinToSign = GRADE_MAX,
								const unsigned int gradeManToExec = GRADE_MAX);
							AForm(const AForm &toCopy);
		virtual				~AForm();
		AForm				&operator=(const AForm &toCopy);

		const std::string	&getName(void) const;
		bool				getIsSigned(void) const;
		unsigned int		getGradeMinToSign(void) const;
		unsigned int		getGradeMinToExec(void) const;

		void				beSigned(const Bureaucrat &bureaucrat);
		virtual void		execute(const Bureaucrat &executor) const = 0;

	private:
		const std::string	name;
		bool				isSigned;
		const unsigned int	gradeMinToSign;
		const unsigned int	gradeMinToExec;
};

std::ostream	&operator<<(std::ostream& flux, const AForm &form);

#endif
