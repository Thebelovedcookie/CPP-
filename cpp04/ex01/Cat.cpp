/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:15:13 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 14:16:50 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): Animal() {
	std::cout << "Cat : A Cat is born." << std::endl;
	this->type = "Cat";
	this->instance = new Brain;
}

Cat::Cat(const Cat &original): Animal(original) {
	std::cout << "Cat : A Cat has been cloned." << std::endl;
	this->type = original.type;
	this->instance = new Brain(*original.getBrain());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {
	std::cout << "Cat : A Cat passed away." << std::endl;
	delete this->instance;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat	&Cat::operator=(Cat const &original) {
	this->type = original.type;
	delete this->instance;
	this->instance = new Brain(*original.getBrain());
	return (*this);
}

std::ostream	&operator<<(std::ostream &Cout, Cat const &i) {
	Cout << "type = " << i.getType();
	return (Cout);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const {
	std::cout << "Miaou, Miaou" << std::endl;
}

void	Cat::printInfo() {
	std::cout << &(this->instance) << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain	*Cat::getBrain() const {
	return (this->instance);
}

/* ************************************************************************** */