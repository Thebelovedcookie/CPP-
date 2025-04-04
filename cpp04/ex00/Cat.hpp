/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:20:16 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/13 13:50:18 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
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
	private:

};

std::ostream	&operator<<(std::ostream &Cout, Cat const &i);