/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:20:00 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/13 11:35:00 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap : Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original) {
	this->attack_damage = original.attack_damage;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->name = original.name;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &original) {
	this->attack_damage = original.attack_damage;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->name = original.name;
	return (*this);
}

DiamondTrap::DiamondTrap(std::string name):  ClapTrap(name + "_clap_trap"), FragTrap(name + "_frag_trap"), ScavTrap(name + "_scav_trap")
{
	this->name = name;
	std::cout << "DiamondTrap : " << this->name << " Constructor Called." << std::endl;
	this->attack_damage= FragTrap::attack_damage;
	this->energy_points = ScavTrap::energy_points;
	this->hit_points = FragTrap::hit_points;
	std::cout << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap : " << this->name << " Destructor Called." << std::endl;
	std::cout << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "my name from DiamondTrap is " << this->name << std::endl;
	std::cout << "my name from ClapTrap is " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}
