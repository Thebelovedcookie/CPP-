/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:24:44 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/31 20:02:46 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level) {
	void (Harl::*functionPTRS[])(void) = {&Harl::debug, &Harl::info,
	&Harl::warning, &Harl::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (level == complains[i])
			(this->*functionPTRS[i])();
	}
}

void    Harl::debug(void) {
	std::cout <<  "DEBUG : I love having extra bacon for my"
	" 7XL-double-cheese-triple-pickle-special-ketchup"
	" burger. I really do !" << std::endl;
}

void    Harl::info(void) {
	std::cout << "INFO: I cannot believe adding extra bacon"
	" costs more money. You didn’t put enough bacon in"
	" my burger ! If you did, I wouldn’t be asking"
	" for more !" << std::endl;
}

void    Harl::warning(void) {
	std::cout << "WARNING: I think I deserve to have some extra"
	" bacon for free. I’ve been coming for years whereas"
	" you started working here since last month." << std::endl;
}

void   Harl::error(void) {
	std::cout << "ERROR: This is unacceptable ! I want to speak"
	" to the manager now." << std::endl;
}

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}
