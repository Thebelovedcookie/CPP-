/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/03 12:12:31 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	{
		std::cout << "\033[34;01mTEST DEFAULT CONSTRUCTOR :" << std::endl;
		Bureaucrat	theDefault;
		Bureaucrat	theFirst("The First", 1);
		Bureaucrat	theSecond(theFirst);
		Bureaucrat	theThird;

		theThird = theSecond;
		std::cout << theDefault << std::endl;
		std::cout << theFirst << std::endl;
		std::cout << theSecond << std::endl;
		std::cout << theThird << std::endl;
		std::cout << "\033[00m";
	}
	{	
		std::cout << "\033[36;01mTEST CONSTRUCTOR :" << std::endl;
		Bureaucrat	theFirst("The First", 155);
		Bureaucrat	theSecond(theFirst);
		Bureaucrat	theThird("The Third", -2);

		std::cout << theFirst << std::endl;
		std::cout << theSecond << std::endl;
		std::cout << theThird << std::endl;
		std::cout << "\033[00m";
	}
	{
		std::cout << "\033[31;01mTEST INCREMENT/DECREMENT :" << std::endl;
		Bureaucrat	theDefault;
		std::cout << theDefault << std::endl;
		theDefault.decrementGrade();
		std::cout << theDefault << std::endl;
		theDefault.incrementGrade();
		std::cout << theDefault << std::endl;
		std::cout << "\033[00m";
	}
	{
		std::cout << "\033[33;01mTEST INCREMENT/DECREMENT 2 :" << std::endl;
		Bureaucrat	theTest("The Test", 1);
		std::cout << theTest << std::endl;
		theTest.incrementGrade();
		std::cout << theTest << std::endl;
		theTest.decrementGrade();
		std::cout << theTest << std::endl;
		std::cout << "\033[00m";
	}
	{
		std::cout << "\033[31;01m";
		Bureaucrat	theOne("The First", 157);
		std::cout << theOne << std::endl;
		std::cout << "\033[00m";
	}
	return (0);
}