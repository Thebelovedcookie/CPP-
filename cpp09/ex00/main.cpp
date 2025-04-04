/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 12:08:42 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Bitcoin.hpp"

int	main(int argc, char **argv)
{
	Bitcoin bc;
	
	if (argc != 2)
	{
		std::cerr << "Bad number of argument." << std::endl;
		return (-1);
	}
	if (bc.parseInput(argv[1]) == -1)
		return (-1);
	bc.input();
	return (0);
}