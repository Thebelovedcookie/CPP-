/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:45:31 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/05 14:30:57 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void red() {
  std::cout << "\033[1;31m";
}

void yellow() {
  std::cout << "\033[0;33m";
}

void violet() {
	std::cout << "\033[1;35m";
}

void reset () {
  std::cout << "\033[0m";
}

std::string print_max(std::string str) {
	int			i;
	std::string	tmp;

	i = 0;
	while (str[i])
		i++;
	if (i > 10) {
		tmp = str.substr(0, 10);
		tmp[9] = '.';
		return (tmp);
	}
	return (str);
}

int		str_is_printable(std::string str) {
	for (int i = 0; str[i] ; i++)
	{
		if (!std::isprint(str[i]))
			return (1);
	}
	return (0);
}