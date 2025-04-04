/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:32:52 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:30:17 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap : Default Constructor Called" << std::endl;
	this->attack_damage = 0;
	this->hit_points = 0;
	this->energy_points = 0;
	this->name = "\0";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &original) {
	this->attack_damage = original.attack_damage;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->name = original.name;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &original): ClapTrap(original)
{
	std::cout << "ScavTrap : Copy Constructor Called" << std::endl;
	this->attack_damage = original.attack_damage;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->name = original.name;
}
ScavTrap::ScavTrap(std::string name):ClapTrap(name) {
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap : "<< this->name << " constructor called" << std::endl;
	std::cout << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : "<< this->name << " destructor called" << std::endl;
	std::cout << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << this->name << " from ScavTrap attacks " << target;
	std::cout << " causing him " << this->getAttackDamage() << std::endl;
	std::cout << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << this->name << " is now in Gate keeper mode" << std::endl;
}
