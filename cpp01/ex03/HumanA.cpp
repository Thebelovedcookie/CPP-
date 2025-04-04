/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:22:12 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/31 12:29:34 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::setWeapon(Weapon weaponA) {
    this->weapon = weaponA;
}

void    HumanA::attack() {
    std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weaponA): name(name), weapon(weaponA) {
    std::cout << "humanA : " <<this->name << " " << this->weapon.getType() << " is created" << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA : " << this->name << " is destroyed." << std::endl;
}