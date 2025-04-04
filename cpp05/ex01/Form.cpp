/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:15:02 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/03 12:41:49 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): name("Default Form"), isSigned(false), beSignedV(75), beExecute(25) {
	std::cout << "Default Construction Form Called" << std::endl;
}

Form::Form(const std::string name, const int beSigned, const int beExecute): name(name), isSigned(false), beSignedV(beSigned), beExecute(beExecute) {
	std::cout << "Constructor Form Called" << std::endl;
	if (beSigned > 150 || beExecute > 150)
		throw (Form::GradeTooLowException());
	if (beSigned < 1 || beExecute < 1)
		throw (Form::GradeTooHighException());
}

Form::Form(const Form & src): name(src.getName()), isSigned(false), beSignedV(src.getGradeForSigned()), beExecute(src.getGradeForExecute()) {
	std::cout << "Copy Constructor Called : Be carefull if your original form was signed, that one cannot be!" << std::endl;
	if (this->beSignedV > 150 || this->beExecute > 150)
		throw (Form::GradeTooLowException());
	if (this->beSignedV < 1 || this->beExecute < 1)
		throw (Form::GradeTooHighException());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() {
	std::cout << "Destructor Called" << std::endl;
}



/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=(Form const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream &operator<<( std::ostream &o, Form const &i) {
	if (i.getIsSigned() == true) {
		o << "Form : " << i.getName() 
		<< " is asking grade : " << i.getGradeForSigned()
		<< " to be signed and grade " << i.getGradeForExecute() << " to be execute is signed ";
	} else {
		o << "Form : " << i.getName() 
		<< " is asking grade : " << i.getGradeForSigned()
		<< " to be signed and grade " << i.getGradeForExecute() << " to be execute is not signed ";
	}
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat src)
{
	if (src.getGrade() <= this->beSignedV) {
		this->isSigned = true;
		std::cout << "The " << *this << "By " << src << std::endl;
	} else {
		std::cout << "The " << *this << "Can't Be Signed By " 
		<< src << " Because his grade is Too Low" << std::endl;
	}
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName(void) const {
	return (this->name);
}

int Form::getGradeForSigned(void) const {
	return (this->beSignedV);
}

int Form::getGradeForExecute(void) const {
	return (this->beExecute);
}

int Form::getIsSigned(void) const {
	// if (this->getIsSigned())
	// 	std::cout << "signed" << std::endl;
	// else
	// 	std::cout << "not signed" << std::endl;
	return (this->isSigned);
}



/* ************************************************************************** */

const char	*Form::GradeTooLowException::what() const throw() {
	return ("Grade Too Low.");
}

const char	*Form::GradeTooHighException::what() const throw() {
	return ("Grade Too High.");
}
