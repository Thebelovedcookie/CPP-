/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/16 13:08:18 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	func(int &array)
{
	array += 1;
}

int	main(void)
{
	int	array[] = {1, 3, 5, 7, 9};
	for (int i = 0; i < 5; i++)
		std::cout << i << ": "<< array[i] << std::endl;
	iter(array, 5, func);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << i << ": "<< array[i] << std::endl;
	return (0);
}