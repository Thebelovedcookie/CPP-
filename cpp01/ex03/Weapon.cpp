/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:22:17 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/06 21:30:03 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType(void) {
    return (this->string);
}

void	Weapon::setType(std::string str) {
    this->string = str;
}

Weapon::Weapon(std::string str): string(str)
{
}

Weapon::~Weapon() {
}