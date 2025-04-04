/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 22:18:56 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/30 22:55:05 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name) {
    Zombie  *horde = new Zombie[n];
    for (int i = 0 ; i < n ; i++) {
        horde[i].set_name(name);
    }
    return (horde);
}