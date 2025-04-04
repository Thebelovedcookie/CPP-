/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:27:02 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:28:26 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	{
		std::cout << "--------------basic tests--------------" << std::endl;
		FragTrap empty;
		empty.print_robot("empty");
	}
	{
		FragTrap a("\033[4;34msalut\033[0m");
		a.print_robot("regular");
		FragTrap copy_a(a);
		copy_a.print_robot("copy");
		FragTrap b;
		b = a;
		b.print_robot("operator =");
	}
	
	std::cout << "let's build some robot -> Construction time." << std::endl;
	FragTrap kyle("\033[4;32mkyle\033[0m");
	ScavTrap john("\033[4;35mjohn\033[0m");
	ClapTrap bob("\033[4;36mbob\033[0m");
	std::cout << "construction done." << std::endl;
	std::cout << "let's test our robot." << std::endl;
	kyle.setAttackDamage(10);
	kyle.attack("john");
	john.takeDamage(10);
	john.beRepaired(10);
	bob.setAttackDamage(25);
	bob.attack("\033[4;32mkyle\033[0m");
	kyle.takeDamage(25);
	kyle.beRepaired(25);
	john.setAttackDamage(30);
	john.attack("\033[4;36mbob\033[0m");
	bob.beRepaired(5);
	kyle.highFivesGuys();
	std::cout << "testing done." << std::endl;
	std::cout << "-> deconstruction time." << std::endl;
	return (0);
}