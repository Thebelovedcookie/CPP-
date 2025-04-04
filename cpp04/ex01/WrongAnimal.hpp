/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:59:59 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/13 14:09:49 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const &original);
		~WrongAnimal();

		WrongAnimal	&operator=(WrongAnimal const &original);
		std::string	getType() const;
		void		makeSound() const;
	private:
	protected:
		std::string	type;

};

std::ostream	&operator<<( std::ostream &Cout, WrongAnimal const &i);
