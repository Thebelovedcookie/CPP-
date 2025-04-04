/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:06:45 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/05 12:36:16 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Form", 25, 5)
{
	std::cout << "Default Constructor Presidential Form Called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Form", 25, 5), _target(target)
{
	std::cout << "Constructor Presidential Form Called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src): AForm(src)
{
	std::cout << "Copy Constructor Presidential Form Called." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "Destructor Presidential Form Called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &bc) const
{
	if (bc.getGrade() > this->getGradeForExecute())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getIsSigned() == false)
		throw (AForm::NotSignedException());
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs)
{
	// std::cout << "Copy by operator Constructor Presidential Form Called." << std::endl;
	if ( this == &rhs )
	{
		return (*this);
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i)
{
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */