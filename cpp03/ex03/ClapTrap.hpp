/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:26:59 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:29:30 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
	private:

	protected:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap();
		//constructor
		ClapTrap(std::string name);
		//copy constructor
		ClapTrap(const ClapTrap &original);
		//destructor
		~ClapTrap();
		//operator overlaoded
		ClapTrap	&operator=(const ClapTrap &original);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			getAttackDamage(void);
		void		setAttackDamage(int attack_dmg);
		void		print_robot(std::string info);
};