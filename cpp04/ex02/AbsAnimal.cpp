/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbsAnimal.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:17:31 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 16:41:38 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AbsAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AbsAnimal::AbsAnimal() {
	std::cout << "AbsAnimal : An Animal is born." << std::endl;
	this->type = "";
}

AbsAnimal::AbsAnimal( const AbsAnimal &original) {
	std::cout << "Copy AbsAnimal : An Animal has been cloned." << std::endl;
	this->type = original.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AbsAnimal::~AbsAnimal() {
	std::cout << "Animal : An Animal passed away." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AbsAnimal	&AbsAnimal::operator=(AbsAnimal const &original)
{
	this->type = original.type;
	return (*this);
}

std::ostream	&operator<<(std::ostream &Cout, AbsAnimal const &i)
{
	Cout << "type = "<< i.getType();
	return (Cout);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// void	Animal::makeSound() const {
// 	std::cout << "Some noises Animals do" << std::endl;
// }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AbsAnimal::getType() const {
	return (this->type);
}

/* ************************************************************************** */