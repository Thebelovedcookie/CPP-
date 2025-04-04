/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:25:59 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/26 13:38:52 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): name("default"), grade(150) {
	std::cout << "Default Constructor Called, with name as Default and grade at 150" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	try {
		std::cout << "Default Constructor Called, with name as '" << name << "' and grade at " << grade << std::endl;
		this->setGrade(grade);
	}
	catch(Bureaucrat::GradeTooHighException &e) {
		this->setGrade(1);
		std::cout << "EXCEPTION CATCH !" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e) {
		this->setGrade(150);
		std::cout << "exception catch" << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): name(src.getName()) {
	std::cout << "Copy Constructor Called" << std::endl;
	try {
		this->setGrade(src.getGrade());
	}
	catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << "exception catch" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << "exception catch" << std::endl;
		std::cerr << e.what() << std::endl;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {
	try {
		this->setGrade(rhs.getGrade());
	}
	catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << "exception catch" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << "exception catch" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i) {
	std::cout << i.getName() << ", Bureaucrat grade " << i.getGrade();
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/


void	Bureaucrat::incrementGrade(void) {
	try {
		std::cout << "Trying to increment the Grade " << this->getGrade() << std::endl;
		this->setGrade(this->getGrade() - 1);
	}
	catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << "exception catch" << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void) {
	try {
		std::cout << "Trying to decrement the Grade" << this->getGrade() << std::endl;
		this->setGrade(this->getGrade() + 1);
	}
	catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << "exception catch" << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Bureaucrat::getName() const {
	return (this->name);
}

int		Bureaucrat::getGrade() const{
	return this->grade;
}

void	Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

/* ************************************************************************** */

const char			*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Too Low.");
}

const char			*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Too High.");
}


