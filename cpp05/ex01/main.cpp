/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/03 12:40:01 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		std::cout << "TEST 1" << std::endl;
		Form *a = NULL;
		try
		{
			a = new Form("Cerfa N1", 155, 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete a;
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "TEST 2" << std::endl;
		Bureaucrat	thePresident("Mr President", 1);
		Bureaucrat	theUseless("Mr Useless", 150);
		Bureaucrat	theMayor("Mr Mayor", 14);
		Form		cerfa("Cerfa n1", 14, 1);

		cerfa.beSigned(theUseless);
		std::cout << cerfa << std::endl;
		cerfa.beSigned(theMayor);
		std::cout << cerfa << std::endl;
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "TEST 3" << std::endl;
		Bureaucrat	thePresident("Mr President", 1);
		Bureaucrat	theUseless("Mr Useless", 150);
		Bureaucrat	theMayor("Mr Mayor", 14);
		Form		cerfa("Cerfa n1", 14, 1);

		theMayor.signForm(cerfa);
		std::cout << std::endl << std::endl;
	}
	return (0);
}