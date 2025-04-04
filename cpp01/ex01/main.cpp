/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:47:40 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/30 22:48:23 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name);

int	main()
{
	Zombie	*horde;

	horde = zombieHorde(10, "zambi");
	for (int i = 0; i < 10; i++) {
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}