/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/28 10:50:55 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#define BLACK "\033[30;01m" 
#define RED "\033[31;01m"
#define GREEN "\033[32;01m"
#define ORANGE "\033[33;01m"
#define BLUE "\033[34;01m"
#define PURPLE "\033[35;01m"
#define TURQUOISE "\033[36;01m"
#define WHITE "\033[37;01m"
#define WHITEB "\033[38;01m"
#define GRAY "\033[39;01m"
#define ENDCOLOR "\033[00m"

int	main(void)
{
	{
		Bureaucrat a;
		Intern z;
		AForm *b = z.makeForm("SomeRandomForm", "Clown");
		b = z.makeForm("PresidentialPardonForm", "Clown");

		std::cout << a <<std::endl;
		std::cout << *b <<std::endl;

		try
		{
			b->beSigned(a);
			// b->execute(*a);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << a.getName() << " was not able to sign " << b->getName() << ": " << e.what() << std::endl;
		}

		std::cout << *b <<std::endl;
		delete b;
	}
	return (0);
}