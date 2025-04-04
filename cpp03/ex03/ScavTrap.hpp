/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:32:00 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:30:30 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
class ScavTrap:virtual public ClapTrap
{
	private:
	
	public:
		//Default constructor
		ScavTrap();
		//constructor
		ScavTrap(std::string name);
		//copy constructor
		ScavTrap(const ScavTrap &original);
		//operator overlaoded
		ScavTrap	&operator=(const ScavTrap &original);
		~ScavTrap();
		void	attack(const std::string& target);
		void guardGate();
};