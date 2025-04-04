/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:34:31 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/06 21:39:56 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Harl.hpp"

int	main()
{
	Harl instance;

	instance.complain("ERROR");
	instance.complain("WARNING");
	instance.complain("DEBUG");
	instance.complain("INFO");
	return (0);
}