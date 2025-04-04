/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:19:51 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/12 14:10:39 by mmahfoud         ###   ########.fr       */
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
    //std::cout << "Int constructor called" << std::endl;
	setRawBits(toComaInt << this->nb_bits_fract);
}

//repousse la valeur en arriere de 8 bits
//donc l'inverse d'au dessus
int	Fixed::toInt(void)const {
	return (this->getRawBits() >> this->nb_bits_fract);
}

//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
Fixed::Fixed(const float toComaFloat) {
    //std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(toComaFloat * (1 << this->nb_bits_fract)));
}

float	Fixed::toFloat(void)const {
	return ((float)this->getRawBits() / (float)(1 << this->nb_bits_fract));
}

/*-----------------------------------ex02-------------------------------------*/

int Fixed::operator>(Fixed const &right) const {
	if (this->getRawBits() > right.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<(Fixed const &right) const {
	if (this->getRawBits() < right.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>=(Fixed const &right) const {
	if (this->getRawBits() >= right.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<=(Fixed const &right) const {
	if (this->getRawBits() <= right.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator==(Fixed const &right) const {
	if (this->getRawBits() == right.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator!=(Fixed const &right) const {
	if (this->getRawBits() != right.getRawBits())
		return (1);
	return (0);
}

Fixed Fixed::operator+(Fixed const &right) const {
	Fixed result(this->toFloat() + right.toFloat());
	return (result);
}

Fixed Fixed::operator-(Fixed const &right) const {
	Fixed result(this->toFloat() - right.toFloat());
	return (result);
}

Fixed Fixed::operator*(Fixed const &right) const {
	Fixed result(this->toFloat() * right.toFloat());
	return (result);
}

Fixed Fixed::operator/(Fixed const &right) const {
	Fixed result(this->toFloat() / right.toFloat());
	return (result);
}

//preincrementation
Fixed	&Fixed::operator++(void) {
	(this->virgule_fixe) += 1;
	return (*this);
}

//pre decrementation
Fixed	&Fixed::operator--(void) {
	(this->virgule_fixe) -= 1;
	return (*this);
}

//post incrementation
Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;

	(this->virgule_fixe) += 1;
	return (tmp);
}

//post decrementation
Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;

	(this->virgule_fixe) -= 1;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a > b)
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

 const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)  {
	if (a < b)
		return (a);
	return (b);
}

const Fixed 	&Fixed::max(Fixed const &a, Fixed const &b)  {
	if (a > b)
		return (a);
	return (b);
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

