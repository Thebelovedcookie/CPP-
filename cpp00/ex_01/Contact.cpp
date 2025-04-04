/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:38:21 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/30 17:43:29 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void	Contact::setFirstname(std::string _firstname) {
    this->_firstname = _firstname;
}
void	Contact::setLastname(std::string _lastname) {
    this->_lastname = _lastname;
}

void	Contact::setNickname(std::string _nickname) {
    this->_nickname = _nickname;
}
	
void	Contact::setPhoneNumber(std::string _phonenumber) {
    this->_phonenumber = _phonenumber;
}

void	Contact::setDarkestSecret(std::string _darkestsecret) {
    this->_darkestsecret = _darkestsecret;
}

std::string	Contact::getFirstname() {
    return (this->_firstname);
}

std::string	Contact::getLastname() {
    return (this->_lastname);
}

std::string	Contact::getNickname() {
    return (this->_nickname);
}

std::string	Contact::getPhoneNumber() {
    return (this->_phonenumber);
}

std::string	Contact::getDarkestSecret() {
    return (this->_darkestsecret);
}