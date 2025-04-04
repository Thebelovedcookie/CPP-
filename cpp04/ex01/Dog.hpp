/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:18:51 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 14:25:10 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog: public Animal
{

	public:

		Dog();
		Dog(Dog const &original);
		~Dog();

		Dog		&operator=(Dog const &original);
		void	makeSound() const;
		Brain	*getBrain() const;
		void	printInfo();
	private:
		Brain	*instance;
};

std::ostream	&operator<<(std::ostream &Cout, Dog const &i);
