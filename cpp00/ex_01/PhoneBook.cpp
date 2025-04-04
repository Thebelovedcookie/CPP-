/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:38:15 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/05 15:20:04 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    violet();
	this->index = 0;
	this->oldest_contact = 0;
    std::cout << "Welcome to your (not so) Awesome PhoneBook" << std::endl;
}

void    PhoneBook::add_contact() {
	
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkestsecret;

	while (_firstname == "") {
		std::cout << "\033[4;33mfirst name:\e[0m" << std::endl;
		getline(std::cin, _firstname);
		if (std::cin.eof()) return ;
		if (str_is_printable(_firstname) == 1)
		{
			_firstname.clear();
			std::cout << "What did you just say to me???\e[0m" << std::endl;
		}
		else
			std::cout << _firstname << ": first name added\e[0m" << std::endl;
	}
    while (_lastname == "") {
		std::cout << "\033[4;33mlast name:\e[0m" << std::endl;
		getline(std::cin, _lastname);
		if (std::cin.eof()) return ;
		if (str_is_printable(_lastname) == 1) {
			_lastname.clear();
			std::cout << "ouh?\e[0m" << std::endl;
		}
		else
			std::cout << _lastname << ": last name added\e[0m" << std::endl;
	}
	while (_nickname == "") {
		std::cout << "\033[4;33mnick name:\e[0m" << std::endl;
		getline(std::cin, _nickname);
		if (std::cin.eof()) return ;
		if (str_is_printable(_nickname) == 1) {
			_nickname.clear();
			std::cout << "Wanna fight ???\e[0m" << std::endl;
		}
		else
			std::cout << _nickname << ": nick name added\e[0m" << std::endl;
	}
	while (_phonenumber == "") {
		std::cout << "\033[4;33mphone number:\e[0m" << std::endl;
		getline(std::cin, _phonenumber);
		if (std::cin.eof()) return ;
		if (str_is_printable(_phonenumber) == 1) {
			_phonenumber.clear();
			std::cout << "Sorry i can't read invisible\e[0m" << std::endl;
		}
		else
			std::cout << _phonenumber << ": phone number added\e[0m" << std::endl;
	}
	while (_darkestsecret == "") {
		std::cout << "\033[4;33mdarkest secret:\e[0m" << std::endl;
		getline(std::cin, _darkestsecret);
		if (std::cin.eof()) return ;
		if (str_is_printable(_darkestsecret) == 1) {
			_darkestsecret.clear();
			std::cout << "good joke ahahah!! but really ?\e[0m" << std::endl;
		}
		else
			std::cout << _darkestsecret << ": darkest secret added\e[0m" << std::endl;
	}
	if (this->index < 8) {
		this->_contact[this->index].setFirstname(_firstname);
		this->_contact[this->index].setLastname(_lastname);
		this->_contact[this->index].setNickname(_nickname);
		this->_contact[this->index].setPhoneNumber(_phonenumber);
		this->_contact[this->index].setDarkestSecret(_darkestsecret);
		this->index += 1;
	}
	else {
		this->_contact[this->oldest_contact].setFirstname(_firstname);
		this->_contact[this->oldest_contact].setLastname(_lastname);
		this->_contact[this->oldest_contact].setNickname(_nickname);
		this->_contact[this->oldest_contact].setPhoneNumber(_phonenumber);
		this->_contact[this->oldest_contact].setDarkestSecret(_darkestsecret);
		if (this->oldest_contact == 7)
			this->oldest_contact = 0;
		else
			this->oldest_contact += 1;
	}
}

void	PhoneBook::search_contact(int nb) {
	if (this->_contact[nb].getFirstname() == "") {
		std::cout << "This contact do not exist yet. Don't be that dumb!" << std::endl;
		std::cout << "You can add a contact by typing ADD in the menu." << std::endl;
		return;
	}
	std::cout << "First Name	: " << this->_contact[nb].getFirstname() << std::endl;
	std::cout << "Last Name	: " << this->_contact[nb].getLastname() << std::endl;
	std::cout << "Nick Name	: " << this->_contact[nb].getNickname() << std::endl;
	std::cout << "Phone Number	: " << this->_contact[nb].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret	: " << this->_contact[nb].getDarkestSecret() << std::endl;
}

int	PhoneBook::searching_for() {
	int			i;
	std::string	buf;
	
	i = 0;
	while (buf != "1" &&  buf != "2" && buf != "3" && buf != "4"
	&& buf != "5" && buf != "6" && buf != "7" && buf != "8") {
		if (i == 1) {
			std::cout << "Sorry, my bad, could you type the"
				" number of the Contact you wish to see please?" << std::endl;
		}
		else if (i == 2) {
			std::cout << "are you stupid or something?" << std::endl;
			std::cout << "let's try again.. which NUMBER of contact do you wish to see?" << std::endl;
		}
		else if (i == 3) {
			red();
			std::cout << "i SWEAR i'm gonna.." << std::endl;
			std::cout << "ahahahahah.., you are so funny. 1, 2, 3, 4, 5, 6, 7 or 8 NOW!" << std::endl;
			yellow();
		}
		else if (i >= 4) {
			red();
			std::cout << " I will look for you, I will find you and I will k*** you." << std::endl;
			std::cout << "just kidding. 🙃 be serious now." << std::endl;
			yellow();
		}
		else
			std::cout << "Hey, wich contact are you looking for ?" << std::endl;
		getline(std::cin, buf);
		i++;
	}
	i = buf[0] - '0';
	return (i);
}

int	PhoneBook::listContact() {
	int	i;

	i = 0;
	if (this->_contact[0].getFirstname() == "") {
		std::cout << "there is no contact yet." << std::endl;
		return (1);
	}
	while (i < 8) {
		if (this->_contact[i].getFirstname() != "") {
			std::cout << std::setw(10) <<  i + 1 << " | " << std::right << std::setw(10)
			<< print_max(this->_contact[i].getFirstname()) << " | " << std::right << std::setw(10)
			<< print_max(this->_contact[i].getLastname()) << " | " << std::right << std::setw(10)
			<< print_max(this->_contact[i].getNickname()) << std::endl;
		}
		i++;
	}
	return (0);
}

void	PhoneBook::routine(void) {
	std::string buffer;
	std::string	buf;
	int			whichOne;
	
	while (buffer != "EXIT") {
		
		violet();
        std::cout << "Please type an option :\e[0m" << std::endl;
		yellow();
        std::cout << "-ADD" << std::endl << "-SEARCH" << std::endl << "-EXIT" << std::endl;
        getline(std::cin, buffer);
		if (std::cin.eof()) break ;
		if (buffer == "ADD")
			PhoneBook::add_contact();
		if (buffer == "SEARCH") {
			if (PhoneBook::listContact() == 0) {
				whichOne = PhoneBook::searching_for();
				PhoneBook::search_contact(whichOne - 1);
			}
		}
		if (buffer == "EXIT")
			std::cout << "you typed EXIT" << std::endl;
    }
}

PhoneBook::~PhoneBook(void) {
    violet();
    std::cout << "Bye, have a nice day" << std::endl;
}