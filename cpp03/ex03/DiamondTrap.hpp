/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:18:49 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/10 15:00:06 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap:  public FragTrap, public ScavTrap
{
	private:
		std::string	name;
	public:
		//default constructor
		DiamondTrap();
		//constructor
		DiamondTrap(std::string name);
		//copy constructor
		DiamondTrap(const DiamondTrap &original);
		DiamondTrap &operator=(const DiamondTrap &original);
		~DiamondTrap();
		void	attack(std::string target);
		void	whoAmI();
};



#endif /*DIAMONDTRAP*/