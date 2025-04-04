/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:36:59 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/13 14:40:10 by mmahfoud         ###   ########.fr       */
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
		const Animal* meta = new Animal();
		std::cout << std::endl;
		const Animal* j = new Dog();
		std::cout << std::endl;
		const Animal* i = new Cat();
		std::cout << std::endl;
		std::cout << *j << " " << std::endl;
		std::cout << *i << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete meta;
		std::cout << std::endl;
		delete j;
		std::cout << std::endl;
		delete i;
	}
	{
		std::cout << std::endl;
		const WrongAnimal *meta = new WrongAnimal();
		std::cout << std::endl;
		const WrongAnimal* j = new WrongCat();
		std::cout << std::endl;
		std::cout << *j << " " << std::endl;
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete meta;
		std::cout << std::endl;
		delete j;
	}
	return (0);
}