/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:38:41 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:29:55 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap : Default Constructor Fragtrap" << std::endl;
	this->attack_damage = 0;
	this->hit_points = 0;
	this->energy_points = 0;
	this->name = "\0";
}

FragTrap::FragTrap(const FragTrap &original): ClapTrap(original) {
	std::cout << "FragTrap : Copy Constructor Fragtrap" << std::endl;
	this->attack_damage = original.attack_damage;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->name = original.name;
}

FragTrap	&FragTrap::operator=(const FragTrap &original) {
	this->attack_damage = original.attack_damage;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->name = original.name;
	return (*this);
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap : " << this->name << " constructor Called" << std::endl << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap : destructor Called" << std::endl << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap : " << this->name << ": do you want to make an High fives with me? Here we go" << std::endl << std::endl;
}