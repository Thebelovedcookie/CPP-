/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:17:31 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/13 14:38:38 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() {
	std::cout << "Animal : An Animal is born." << std::endl;
	this->type = "";
}

Animal::Animal( const Animal &original) {
	std::cout << "Copy Animal : An Animal has been cloned." << std::endl;
	this->type = original.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() {
	std::cout << "Animal : An Animal passed away." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal	&Animal::operator=(Animal const &original)
{
	this->type = original.type;
	return (*this);
}

std::ostream	&operator<<(std::ostream &Cout, Animal const &i)
{
	Cout << "type = "<< i.getType();
	return (Cout);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const {
	std::cout << "Some noises Animals do" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Animal::getType() const {
	return (this->type);
}

/* ************************************************************************** */