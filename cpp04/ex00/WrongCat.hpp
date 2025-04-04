/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:00:07 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/20 13:19:44 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat: public WrongAnimal
{

	public:

		WrongCat();
		WrongCat(WrongCat const &original);
		~WrongCat();

		WrongCat	&operator=(WrongCat const &original);
		void		makeSound() const;

	private:

};

std::ostream &			operator<<(std::ostream &o, WrongCat const &i);
