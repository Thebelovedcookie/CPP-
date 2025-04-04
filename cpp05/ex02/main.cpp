/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/26 13:45:43 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	std::cout << ORANGE;
	Bureaucrat	thePresident("Mr President", 1);
	std::cout << PURPLE;
	Bureaucrat	theUseless("Mr Useless", 150);
	std::cout << WHITE;
	Bureaucrat	theMayor("Mr Mayor", 14);
	std::cout << RED;
	PresidentialPardonForm	cerfa("bla");
	std::cout << TURQUOISE;
	RobotomyRequestForm		cerfa2("bli");
	std::cout << GREEN;
	ShrubberyCreationForm	cerfa3("blo");
	
	{
		std::cout << "1" << ORANGE<< std::endl;
		try {
			cerfa.beSigned(thePresident);
			cerfa.execute(thePresident);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! a" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! b" << std::endl;
		}
	}
	{
		std::cout  << "2" << PURPLE<< std::endl;
		try {
		cerfa.beSigned(theUseless);
		cerfa.execute(theUseless);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! c" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! d" << std::endl;
		}
	}
	{
		std::cout  << "3" << WHITE<< std::endl;
		try {
			cerfa.beSigned(theMayor);
			cerfa.execute(theMayor);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! e" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! f" << std::endl;
		}
	}

	{
	std::cout  << "4" << ORANGE<< std::endl;
		try {
			cerfa2.beSigned(thePresident);
			cerfa2.execute(thePresident);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! e" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! f" << std::endl;
		}
	}
	{
	std::cout  << "5" << PURPLE<< std::endl;
		try {
			cerfa2.beSigned(theMayor);
			cerfa2.execute(theMayor);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! e" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! f" << std::endl;
		}
	}
	{
	std::cout  << "6" << WHITE<< std::endl;
		try {
			cerfa2.beSigned(theUseless);
			cerfa2.execute(theUseless);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! e" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! f" << std::endl;
		}
	}

	
	{
	std::cout << "8" << ORANGE<< std::endl;
		try {
			cerfa3.beSigned(thePresident);
			cerfa3.execute(thePresident);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! e" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! f" << std::endl;
		}
	}
	{
	std::cout << "9" << PURPLE<< std::endl;
		try {
			cerfa3.beSigned(theMayor);
			theMayor.executeForm(cerfa3);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! e" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! f" << std::endl;
		}
	}
	{
	std::cout << "10" << WHITE<< std::endl;
		try {
			cerfa3.beSigned(theUseless);
			cerfa3.execute(theUseless);
		}
		catch (const AForm::NotSignedException& e)
		{
			std::cout << "exception catch! e" << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "exception catch! f" << std::endl;
		}
	}
	std::cout << ENDCOLOR;
	return (0);
}