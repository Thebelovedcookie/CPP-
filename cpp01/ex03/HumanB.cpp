/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:22:01 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 11:07:09 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
	this->weaponB = NULL;
	std::cout << "HumanB : " << this->name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB : " << this->name << " is destroyed" << std::endl;
}

void	HumanB::setWeapon(Weapon &gun) {
	this->weaponB = &gun;
}

void	HumanB::attack(void) {
	if (this->weaponB)
		std::cout << this->name << " attacks with their " << this->weaponB->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon yet.. " << std::endl;
}

