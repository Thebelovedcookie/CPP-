/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:36:59 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 14:24:51 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int	main()
{
	{
		std::cout << "\e[0;31m";
		std::cout << std::endl;
		std::cout << "------------------TEST EXAMPLE----------------" << std::endl;
		const Animal* j = new Dog();
		const Animal* is = new Cat();
		std::cout << std::endl;
		delete j;
		delete is;
		std::cout << "\e[0m";
	}	
	{
		std::cout << std::endl;
		std::cout << "\e[0;32m";
		std::cout << "-----------------COPY CAT-----------------" << std::endl;
		std::cout << std::endl;
		Cat	cirse;
		cirse.printInfo();

		Cat cloneCirse(cirse);
		cloneCirse.printInfo();

		Cat clone2;

		clone2 = cirse;
		clone2.printInfo();
	}
	std::cout << "\e[0m";
	{
		std::cout << std::endl;
		std::cout << "\e[0;35m";
		std::cout << "-----------------COPY DOG-----------------" << std::endl;
		std::cout << std::endl;
		Dog jungle;
		jungle.printInfo();

		Dog cloneJungle(jungle);
		cloneJungle.printInfo();

		Dog clone2;

		clone2 = jungle;
		clone2.printInfo();
	}
	std::cout << "\e[0m";
	{
		std::cout << std::endl;
		std::cout << "\e[0;36m";
		std::cout << "-----------------ARRAY-----------------" << std::endl;
		const Animal *array[4];
			std::cout << std::endl;
		std::cout << "Constructor Time" << std::endl;
		for (size_t i = 0; i < 4/2; i++)
			array[i] = new Dog();
		for (size_t i = 4/2; i < 4; i++)
			array[i] = new Cat();
		std::cout << std::endl;
		std::cout << "Delete Time" << std::endl;
		for (size_t i = 0; i < 4; i++)
			delete array[i];
		std::cout << "\e[0m";
	}
	return (0);
}