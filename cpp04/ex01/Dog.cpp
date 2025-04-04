/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:15:15 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 14:16:40 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(): Animal() {
	std::cout << "Dog : A Dog is born." << std::endl;
	this->type = "Dog";
	this->instance = new Brain;
}

Dog::Dog(const Dog &original): Animal(original) {
	std::cout << "Dog : A Dog has been cloned." << std::endl;
	this->type = "Dog";
	this->instance = new Brain(*original.getBrain());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {
	std::cout << "Dog : A Dog passed away." << std::endl;
	delete this->instance;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog	&Dog::operator=(Dog const &original)
{
	this->type = original.type;
	delete this->instance;
	this->instance = new Brain(*original.getBrain());
	return (*this);
}

std::ostream &operator<<(std::ostream &Cout, Dog const &i )
{
	Cout << "type = " << i.getType();
	return (Cout);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const {
	std::cout << "Ouaf, Ouaf" << std::endl;
}

void	Dog::printInfo() {
	std::cout << &(this->instance) << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain	*Dog::getBrain() const {
	return (this->instance);
}

/* ************************************************************************** */