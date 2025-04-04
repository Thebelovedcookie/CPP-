/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bitcoin.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:53:47 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 14:39:16 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <iomanip>
#include <vector>
#include <utility> 

class Bitcoin
{
	private:
		std::map<std::string, double>					dataBase;
		std::vector<std::pair<std::string, double> >	inputValue;
	public:
		int		parseInput(char *fileName);
		void	input();
		int		checkInput(std::vector<std::pair<std::string, double> >::iterator it);
		Bitcoin();
		Bitcoin(Bitcoin const &obj);
		Bitcoin const &operator=(Bitcoin const &obj);
		~Bitcoin();
};

