/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:26:19 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:30:43 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap:virtual public ClapTrap
{
	private:

	public:
		//default constructor
		FragTrap();
		//constructor
		FragTrap(std::string name);
		//copy constructor
		FragTrap(const FragTrap &original);
		//operator overloaded
		FragTrap	&operator=(const FragTrap &original);
		//destructor
		~FragTrap();
		void	highFivesGuys(void);
};