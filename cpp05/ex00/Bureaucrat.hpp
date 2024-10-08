/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:56:33 by ccormon           #+#    #+#             */
/*   Updated: 2024/07/31 14:59:44 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

# define GRADE_MAX 1
# define GRADE_MIN 150

// class	exception
// {
// public:
// 						exception() throw(){} //Constructeur.
// 	virtual				exception() throw(); //Destructeur.

// 	virtual const char	*what() const throw(); //Renvoie une chaîne "à la C" contenant des infos sur l'erreur.
// };

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

	private:
		const std::string	name;
		unsigned int		grade;
};

std::ostream	&operator<<(std::ostream& flux, const Bureaucrat &bureaucrat);

#endif
