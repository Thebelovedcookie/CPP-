/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:27:02 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 18:06:37 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	{
		std::cout << "--------------basic tests--------------" << std::endl;
		ScavTrap empty;
		empty.print_robot("empty");
	}
	{
		ScavTrap a("\033[4;34msalut\033[0m");
		a.print_robot("regular");
		ScavTrap copy_a(a);
		copy_a.print_robot("copy");
		ScavTrap b;
		b = a;
		b.print_robot("operator =");
	}
	{
		std::cout << "--------------FIGHT!--------------" << std::endl;
		ClapTrap bob("\033[4;36mbob\033[0m");
		ScavTrap john("\033[4;35mjohn\033[0m");
		bob.attack("\033[4;35mjohn\033[0m");
		john.attack("\033[4;36mbob\033[0m");
		bob.takeDamage(20);
		john.takeDamage(0);
		john.beRepaired(1);
	}
	return (0);
}