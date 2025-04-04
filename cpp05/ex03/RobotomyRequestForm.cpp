/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:45:34 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 14:45:35 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Form", 72, 45)
{
	std::cout << "Default constructor Robotomy Form Called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Form", 72, 45), _target(target)
{
	std::cout << "Constructor Robotomy Form Called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src): AForm(src)
{
	std::cout << "Copy constructor Robotomy Form Called." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "Destructor Robotomy Form Called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	// std::cout << "Copy by operator constructor Robotomy Form Called." << std::endl;
	if ( this == &rhs )
	{
		return (*this);
	}
	return (*this);
}

std::ostream &			operator<<(std::ostream &o, RobotomyRequestForm const &i)
{
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const &bc) const
{
	if (bc.getGrade() > this->getGradeForExecute())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getIsSigned() == false)
		throw (AForm::NotSignedException());
	int random = std::rand();
	if (random % 2)
	{
		std::cout << "🔊💥🔨🔧🪛🪚" << _target << " was robotomized" << std::endl;
	}
	else
		std::cout << "Robotomy failed" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */