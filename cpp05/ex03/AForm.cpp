/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:15:02 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/07/29 14:59:32 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(): name("Default AForm"), isSigned(false), beSignedV(75), beExecute(25)
{
	// std::cout << "Default Construction AForm Called" << std::endl;
}

AForm::AForm(const std::string name, const int beSigned, const int beExecute): name(name), isSigned(false), beSignedV(beSigned), beExecute(beExecute)
{
	// std::cout << "Constructor AForm Called" << std::endl;
	if (beSigned > 150 || beExecute > 150)
		throw (AForm::GradeTooLowException());
	if (beSigned < 1 || beExecute < 1)
		throw (AForm::GradeTooHighException());
}

AForm::AForm(const AForm & src): name(src.getName()), isSigned(false), beSignedV(src.getGradeForSigned()), beExecute(src.getGradeForExecute())
{
	// std::cout << "Copy Constructor Called : Be carefull if your original AForm was signed, that one cannot be!" << std::endl;
	if (this->beSignedV > 150 || this->beExecute > 150)
		throw (AForm::GradeTooLowException());
	if (this->beSignedV < 1 || this->beExecute < 1)
		throw (AForm::GradeTooHighException());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	// std::cout << "Destructor Called" << std::endl;
}



/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &AForm::operator=(AForm const &rhs)
{
	if (this == &rhs)
		return *this;
	return *this;
}



std::ostream &operator<<( std::ostream &o, AForm const &i)
{
	if (i.getIsSigned() == true)
		o << "AForm : " << i.getName() << " is asking grade : " << i.getGradeForSigned()
	<< " to be signed and grade " << i.getGradeForExecute();
	else
		o << "AForm : " << i.getName() << " is asking grade : " << i.getGradeForSigned()
	<< " to be signed and grade " << i.getGradeForExecute();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AForm::beSigned(Bureaucrat src)
{
	if (src.getGrade() <= this->beSignedV)
	{
		this->isSigned = true;
		std::cout << "The " << *this << "Has Been Signed By " << src << std::endl;
	}
	else
		std::cout << "The " << *this << "Can't Be Signed By " << src << " Because his grade is Too Low" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AForm::getName(void) const
{
	return (this->name);
}

int AForm::getGradeForSigned(void) const
{
	return (this->beSignedV);
}

int AForm::getGradeForExecute(void) const
{
	return (this->beExecute);
}

int AForm::getIsSigned(void) const
{
	// if (this->getIsSigned())
	// 	std::cout << "signed" << std::endl;
	// else
	// 	std::cout << "not signed" << std::endl;
	return (this->isSigned);
}



/* ************************************************************************** */

const char			*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low.");
}

const char			*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High.");
}

const char			*AForm::NotSignedException::what() const throw()
{
	return ("Form needs to be signed before executing");
}
