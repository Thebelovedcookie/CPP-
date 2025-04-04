/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:27:02 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:31:24 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ()
{
	std::cout << "let's build some robot -> Construction time." << std::endl;
	FragTrap kyle("\033[4;32mkyle\033[0m");
	ScavTrap john("\033[4;35mjohn\033[0m");
	ClapTrap bob("\033[4;36mbob\033[0m");
	DiamondTrap cecile("\033[4;33mcecile\033[0m");
	std::cout << "construction done." << std::endl;
	cecile.print_robot("regular");
	cecile.whoAmI();
	std::cout << std::endl;
	bob.print_robot("regular");
	std::cout << std::endl;
	john.print_robot("regular");
	std::cout << std::endl;
	kyle.print_robot("regular");
	std::cout << "let's test our robot." << std::endl;
	cecile.attack("\033[4;36mbob\033[0m");
	bob.takeDamage(20);
	john.guardGate();
	kyle.highFivesGuys();
	john.attack("\033[4;33mcecile\033[0m");
	cecile.takeDamage(20);
	cecile.beRepaired(20);
	cecile.attack("\033[4;32mkyle\033[0m");
	kyle.takeDamage(20);
	std::cout << "testing done." << std::endl;
	std::cout << "-> deconstruction time." << std::endl;
	return (0);
}