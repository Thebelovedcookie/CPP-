/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:17:34 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/13 14:31:27 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Animal
{

	public:
		Animal();
		Animal(Animal const &original);
		virtual ~Animal();

		Animal			&operator=(Animal const &original);
		std::string		getType() const;
		virtual void	makeSound() const;
	private:
	
	protected: 
		std::string	type;
};

std::ostream	&operator<<(std::ostream &Cout, Animal const &i);
