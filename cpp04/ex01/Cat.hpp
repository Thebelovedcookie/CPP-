/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:20:16 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 12:17:10 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Cat: public Animal
{

	public:

		Cat();
		Cat(Cat const &original);
		~Cat();

		Cat		&operator=(Cat const &original);
		void	makeSound() const;
		Brain	*getBrain() const;
		void	printInfo();
	private:
		Brain	*instance;

};

std::ostream	&operator<<(std::ostream &Cout, Cat const &i);