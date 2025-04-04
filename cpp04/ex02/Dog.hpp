/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:18:51 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 16:41:29 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AbsAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog: public AbsAnimal
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
