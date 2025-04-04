/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:48:52 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/12 14:05:07 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): virgule_fixe(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &original) {
	std::cout << "Copy constructor called" << std::endl;
    this->virgule_fixe = original.getRawBits();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed	&Fixed::operator=(Fixed const &original) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->virgule_fixe = original.getRawBits();
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int     Fixed::getRawBits(void)const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->virgule_fixe);
}

void    Fixed::setRawBits(int const raw) {
	this->virgule_fixe = raw;
}

/* ************************************************************************** */