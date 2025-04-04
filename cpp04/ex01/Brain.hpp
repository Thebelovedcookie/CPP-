/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 00:07:16 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/14 11:47:29 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain(Brain const &original);
		~Brain();

		Brain		&operator=(Brain const &original);
		std::string	*getIdeas() const;
	private:
		std::string *ideas;

};

std::ostream	&operator<<(std::ostream &Cout, Brain const &i);