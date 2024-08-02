/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:56:33 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/02 16:07:53 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

# define GRADE_MAX 1
# define GRADE_MIN 150

class	AForm;

class	Bureaucrat
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
							Bureaucrat(std::string name = "Someone",
								unsigned int grade = GRADE_MIN);
							Bureaucrat(const Bureaucrat &toCopy);
							~Bureaucrat(void);
		Bureaucrat			&operator=(const Bureaucrat &toCopy);

		const std::string	&getName(void) const;
		unsigned int		getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(AForm &toSign);

	private:
		const std::string	name;
		unsigned int		grade;
};

std::ostream	&operator<<(std::ostream& flux, const Bureaucrat &bureaucrat);

#endif
