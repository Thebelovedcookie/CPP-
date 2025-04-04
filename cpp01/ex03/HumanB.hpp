/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:22:08 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 10:54:38 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weaponB;
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &gun);
		~HumanB();
};