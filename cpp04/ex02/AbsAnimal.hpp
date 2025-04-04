/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbsAnimal.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:17:34 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/17 21:57:22 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class AbsAnimal
{

	public:
		AbsAnimal();
		AbsAnimal(AbsAnimal const &original);
		virtual ~AbsAnimal();

		AbsAnimal		&operator=(AbsAnimal const &original);
		std::string		getType() const;
		virtual void	makeSound() const = 0;
	private:
	
	protected: 
		std::string	type;
};

std::ostream	&operator<<(std::ostream &Cout, AbsAnimal const &i);
