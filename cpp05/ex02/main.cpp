/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:56:10 by ccormon           #+#    #+#             */
/*   Updated: 2024/08/02 13:29:01 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	astride("Astride", 5);
	Form		dumbForm1("dumb form", false, 4, 4);

	try
	{
		std::cout << astride << ", try to sign " << dumbForm1.getName()
			<< std::endl;
		astride.signForm(dumbForm1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Try to increment " << astride << std::endl;
		astride.incrementGrade();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << astride << ", try to sign " << dumbForm1.getName()
			<< std::endl;
		astride.signForm(dumbForm1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << astride << ", try to sign " << dumbForm1.getName()
			<< std::endl;
		astride.signForm(dumbForm1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
