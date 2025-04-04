/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/16 11:23:34 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data obj;
	
	obj.c = 'a';
	obj.nb = 1;
	obj.str = "abc";

	std::cout << obj.c << " "
	<< obj.nb << " "
	<< obj.str << " "
	<< std::endl;

	uintptr_t serialized = Serializer::serialize(&obj);
	Data *deserialized = Serializer::deserialize(serialized);
	
	std::cout << deserialized->c << " "
	<< deserialized->nb << " "
	<< deserialized->str << " "
	<< std::endl;
	return (0);
}