/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 00:07:20 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 12:14:01 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() {
	std::cout << "Brain : Constructor Called" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "some thoughts";
	}
}

Brain::Brain(const Brain &original) {
	std::cout << "Copy Brain : Constructor Called" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "Copy : " + original.ideas[i];
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain() {
	std::cout << "Brain : Destructor Called" << std::endl;
	delete[] this->ideas;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain	&Brain::operator=(Brain const &original)
{
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "Copy : " + original.ideas[i];
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &Cout, Brain const &ins)
{
	std::string	*thoughts = ins.getIdeas();
	for (int i = 0; i < 100; i++)
		Cout << "Brain Thoughts = " << thoughts[i];
	return (Cout);
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	*Brain::getIdeas() const {
	return (this->ideas);
}

/* ************************************************************************** */