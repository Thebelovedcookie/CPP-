/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:19:51 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/12 14:08:40 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): virgule_fixe(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &original) {
	//std::cout << "Copy constructor called" << std::endl;
    this->virgule_fixe = original.getRawBits();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed	&Fixed::operator=(Fixed const &original) {
	//std::cout << "Copy assignment operator called" << std::endl;
	this->virgule_fixe = original.getRawBits();
	return (*this);
}

//not a member method
std::ostream	&operator<<(std::ostream &Cout, Fixed const &Instance) {
	Cout << Instance.toFloat();
	return (Cout);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*-----------------------------------ex01-------------------------------------*/
//pour un int 3, en binaire ca donne 28 0 puis 0011
//on va pousser 0011 de 8 bits, et donne avoir
//0011 0000 0000
Fixed::Fixed(const int toComaInt) {
    std::cout << "Int constructor called For " << toComaInt << std::endl;
	setRawBits(toComaInt << this->nb_bits_fract);
}

//repousse la valeur en arriere de 8 bits
//donc l'inverse d'au dessus
int	Fixed::toInt(void)const {
	return (this->getRawBits() >> this->nb_bits_fract);
}

//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
Fixed::Fixed(const float toComaFloat) {
    std::cout << "Float constructor called For " << toComaFloat << std::endl;
	this->setRawBits(roundf(toComaFloat * (1 << this->nb_bits_fract)));
}

float	Fixed::toFloat(void)const {
	return ((float)this->getRawBits() / (float)(1 << this->nb_bits_fract));
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int     Fixed::getRawBits(void)const {
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->virgule_fixe);
}

void    Fixed::setRawBits(int const raw) {
	this->virgule_fixe = raw;
}

/* ************************************************************************** */
