/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bitcoin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:43:11 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/11/27 15:08:01 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bitcoin.hpp"

int Bitcoin::parseInput(char *fileName)
{
	std::string sfileName(fileName);
	size_t extFind = sfileName.find(".txt", sfileName.size() - 4);
	if (extFind == std::string::npos)
	{
		std::cerr << "Bad format input" << std::endl;
		return (-1);
	}

	std::ifstream file(fileName);
	if (file.fail())
	{
		std::cerr << "Can't open this file!" << std::endl;
		return (-1);
	}
	std::string line;
	getline(file, line);
	this->inputValue.clear();
	while (line != "")
	{
		line.clear();
		getline(file, line);
		if (line == "")
			break;
		size_t separator = line.find(" | ");
		if (separator != std::string::npos)
		{
			std::string date = line.substr(0, separator);
			std::string value3 = line.substr(separator + 3, line.size() - separator);
			std::stringstream ss(line.substr(separator + 3, line.size() - separator));
			double bitcoinNb;
			ss >> bitcoinNb;
			this->inputValue.push_back(std::make_pair(date, bitcoinNb));
		}
		else
		{
			this->inputValue.push_back(std::make_pair(line, -1));
		}
	}
	return (0);
}

Bitcoin::Bitcoin(/* args */)
{
	std::ifstream file("data.csv");

	if (file.fail())
	{
		std::cerr << "Can't open this file!" << std::endl;
	}
	std::string line;
	getline(file, line);
	while (line != "")
	{
		line.clear();
		getline(file, line);
		size_t separator = line.find(",");
		if (separator != std::string::npos)
		{
			std::string date = line.substr(0, separator);
			std::stringstream ss(line.substr(separator + 1, line.size() - separator));
			double bitcoinValue;
			ss >> bitcoinValue;
			this->dataBase[date] = bitcoinValue;
		}
	}
}

Bitcoin::Bitcoin(Bitcoin const &obj)
{
	this->inputValue = obj.inputValue;
	this->dataBase = obj.dataBase;
}

Bitcoin const &Bitcoin::operator=(Bitcoin const &obj)
{
	this->inputValue = obj.inputValue;
	this->dataBase = obj.dataBase;
	return (*this);
}
void Bitcoin::input()
{
	std::vector<std::pair<std::string, double> >::iterator it = inputValue.begin();
	for (; it != inputValue.end(); it++)
	{
		if (it->first.size() < 4 || it->first.at(4) != '-' || it->first.at(7) != '-' || it->first.size() > 10)
			std::cerr << "Error : bad input =>" << it->first <<  std::endl;
		else 
		{
			if (checkInput(it) == -1)
				std::cerr << "Error : bad input =>" << it->first <<  std::endl;
			else {
				if (it->second < 0 || it->second > 2147483647)
				{
					if (it->second < 0)
					std::cerr << "Error: not a positive number." << std::endl;
					else
					std::cerr << "Error: too large a number." << std::endl;
				}
				else
				{
					std::map<std::string, double>::iterator it2 = dataBase.lower_bound(it->first);
					if (it2 != dataBase.begin() && it2->first != it->first) {
						it2--;
					}
					std::cout << it->first << " => " << it->second << " = " << it->second * it2->second << std::endl;
				}
			}
		}
	}
}

int	Bitcoin::checkInput(std::vector<std::pair<std::string, double> >::iterator it)
{
	std::string year;
	std::string month;
	std::string day;
	size_t sep = it->first.find("-");
	if (sep != std::string::npos)
	{
		year = it->first.substr(0, sep);
		std::stringstream ss(year);
		int year_int = 0;
		ss >> year_int;
		if (year_int < 2009 || year_int > 2022)
			return (-1);
		else
		{
			size_t sep2 = it->first.find("-", sep + 1);
			if (sep2 != std::string::npos)
			{
				month = it->first.substr(sep + 1, 2);
				std::stringstream ss1(month);
				int month_int = 0;
				ss1 >> month_int;
				if (month_int < 1 || month_int > 12)
					return (-1);
				else
				{
					int day_max = 31;
					if (month_int == 4 || month_int == 6 || month_int == 9 || month_int == 11)
						day_max = 30;
					if (month_int == 2)
						day_max = 29;
					day = it->first.substr(sep2 + 1, it->first.size());
					std::stringstream ss2(day);
					int day_int = 0;
					ss2 >> day_int;
					if (day_int < 1 || day_int > day_max)
						return (-1);
				}
			}
		}
	}
	return (0);
}

Bitcoin::~Bitcoin()
{
	dataBase.clear();
}