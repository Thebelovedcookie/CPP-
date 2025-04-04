/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:27:02 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 17:57:35 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	{
		std::cout << "--------------basic tests--------------" << std::endl;
		ClapTrap a("salut");
		a.print_robot("normal");
		ClapTrap copy_a(a);
		copy_a.print_robot("copy");
		ClapTrap b;
		b = a;
		copy_a.print_robot("operator =");
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "--------------Fight!--------------" << std::endl;
		std::cout << "Weeeeeeeeeelcoooooooome to all of you!" << std::endl;
		std::cout << "we are gathered today for the big fight between" << std::endl;
		std::cout << "\033[4;32mCEDRIIIIIIIC DOUMBEEEEEEEEEEEE\033[0m !!!!!" << std::endl;
		ClapTrap Ced("\033[4;32mCedric Doumbe\033[0m");
		std::cout << "aaaaand..." << std::endl;
		std::cout << "\033[4;35mBAKIIIIIIIII\033[0m !!!!" << std::endl;
		ClapTrap Baki("\033[4;35mBaki\033[0m");
		std::cout << "FIGHT !!!" << std::endl;
		Ced.attack("\033[4;35mBaki\033[0m");
		Ced.setAttackDamage(5);
		Ced.attack("\033[4;35mBaki\033[0m");
		Baki.takeDamage(5);
		Baki.setAttackDamage(5);
		Baki.attack("\033[4;32mCedric\033[0m");
		Baki.attack("\033[4;32mCedric\033[0m");
		Ced.takeDamage(10);
		Ced.attack("\033[4;35mBaki\033[0m");
	}
	return (0);
}