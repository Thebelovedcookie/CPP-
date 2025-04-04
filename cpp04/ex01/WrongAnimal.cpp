/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:48 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/13 14:36:16 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal : Constructor Called" << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &original) {
	std::cout << "WrongAnimal : Copy Constructor Called" << std::endl;
	this->type = original.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal : Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &original)
{
	this->type = original.type;
	return (*this);
}

std::ostream	&operator<<(std::ostream &Cout, WrongAnimal const &i)
{
	Cout << "type = " << i.getType();
	return (Cout);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal : Some strange noises" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	WrongAnimal::getType() const {
	return (this->type);
}

/* ************************************************************************** */