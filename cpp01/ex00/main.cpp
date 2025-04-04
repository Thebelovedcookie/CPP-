/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:47:40 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/30 22:16:06 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void 	randomChump(std::string name);
Zombie  *newZombie(std::string name);

int	main()
{
	Zombie	*foo;
	
	foo = newZombie("foo");
	foo->announce();
	randomChump("Chump");
	delete foo;
	return (0);
}