/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:26:53 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:09:53 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""),
hit_points(0), energy_points(0), attack_damage(0){
	std::cout 
	<< "Default Constructor for ClapTrap Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name),
hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "🥊🥊 (constructor)" << std::endl << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original) {
	std::cout << "Copy constructor called." << std::endl;
	this->attack_damage = original.attack_damage;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->name = original.name;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &original) {
	this->attack_damage = original.attack_damage;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->name = original.name;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << " : goes home..." << std::endl;
}

int ClapTrap::getAttackDamage(void) {
	return (this->attack_damage);
}

void ClapTrap::setAttackDamage(int attack_dmg) {
	this->attack_damage = attack_dmg;
}

void ClapTrap::attack(const std::string &target) {
	if (this->hit_points == 0 && this->name == "\033[4;32mCedric Doumbe\033[0m") {
		std::cout << "oh non j'ai une epine dans le pied... Je ne peux plus attaquer" << std::endl << std::endl;
		return ;
	}
	else if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name <<
		" has no life point left..." << std::endl << std::endl;
		return ;
	}
	if (this->energy_points == 0) {
		std::cout << "ClapTrap " << this->name <<
		" has no energy_points point left..." << std::endl << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target <<
	", causing him " << this->getAttackDamage() << " points of damages !" << std::endl;
	(this->energy_points) -= this->attack_damage;
	std::cout << "i have now " << this->energy_points << "  energy_points left!" << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hit_points -= amount;
	if (this->hit_points <= 0)
		std::cout << this->name << " just died..." << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name <<
		" has no life point left..." << std::endl << std::endl;
		return ;
	}
	if (this->energy_points == 0) {
		std::cout << "ClapTrap " << this->name <<
		" has no energy_points point left..." << std::endl << std::endl;
		return ;
	}
	this->hit_points += amount;
	(this->energy_points) -= amount;
	std::cout << this->name << ": i heal myself with "
	<< amount << " point of life, i've got now " << this->hit_points
	<< "life point and " << this->energy_points << " left!" << std::endl << std::endl;
}

void	ClapTrap::print_robot(std::string info) {
	std::cout << std::endl;
	std::cout << "\033[4;38mInformations on robot :" << info << "\033[0m" << std::endl;
	std::cout << "name		:" << this->name << std::endl;
	std::cout << "hp		:" << this->hit_points << std::endl;
	std::cout << "energy_points	:" << this->energy_points << std::endl;
	std::cout << "attack_damage	:" << this->attack_damage << std::endl;
	std::cout << std::endl;
}