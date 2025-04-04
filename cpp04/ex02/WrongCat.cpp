/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:00:03 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/13 14:38:51 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat : A Cat is born." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &original): WrongAnimal(original) {
	std::cout << "WrongCat : A WrongCat has been cloned." << std::endl;
	this->type = original.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat() {
	std::cout << "WrongCat : A WrongCat passed away." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat	&WrongCat::operator=(WrongCat const &original)
{
	this->type = original.type;
	return (*this);
}

std::ostream	&operator<<(std::ostream &Cout, WrongCat const &i)
{
	Cout << "type = " << i.getType();
	return (Cout);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		WrongCat::makeSound() const {
	std::cout << "WrongMiaou, WrongMiaou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */