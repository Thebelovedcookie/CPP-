/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:44:25 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/28 11:19:34 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{
}

void ScalarConverter::convert(std::string obj)
{
	 if (obj == "-inff" || obj == "-inf") {
        std::cout << "char	: impossible" << std::endl;
        std::cout << "int	: impossible" << std::endl;
        std::cout << "float	: -inff" << std::endl;
        std::cout << "double	: -inf" << std::endl;
        return;
    } else if (obj == "+inff" || obj == "+inf") {
        std::cout << "char	: impossible" << std::endl;
        std::cout << "int	: impossible" << std::endl;
        std::cout << "float	: +inff" << std::endl;
        std::cout << "double	: +inf" << std::endl;
        return;
    } else if (obj == "nanf" || obj == "nan") {
        std::cout << "char	: impossible" << std::endl;
        std::cout << "int	: impossible" << std::endl;
        std::cout << "float	: nanf" << std::endl;
        std::cout << "double	: nan" << std::endl;
        return;
    }
	if (obj.length() == 1 && std::isprint(obj.at(0)))
	{
		std::cout << "char	: " << obj.at(0) << std::endl;
		std::cout << "int	: " << static_cast<int>(obj.at(0)) << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float	: " << static_cast<float>(obj.at(0)) << "f" <<  std::endl;
		std::cout << "double	: " << static_cast<double>(obj.at(0)) << std::endl;
		return ;
	}
	for (size_t i = 0; i < obj.length() - 1; i++)
	{
		if (!std::isdigit(obj.at(i)) && obj.at(i) != '.') 
		{
			std::cerr << "failed to convert value." << std::endl;
			return ;
		}
	}
	if (std::isalpha(obj.at(obj.length()-1)))
	{
		if (obj.at(obj.length()-1) != 'f' && obj.at(obj.length()-1) != 'F')
		{
			std::cerr << "failed to convert value." << std::endl;
			return ;
		}
	}
	int	value = 0;
	float fvalue;
	double dvalue;
	std::stringstream ss(obj);
	ss >> fvalue;
	dvalue = static_cast<double>(fvalue);
	value = static_cast<int>(fvalue);
	char c = static_cast<char>(value);
	if (!ss.fail())
	{
		if (std::isprint(c))
			std::cout << "char	: " << static_cast<char>(value) << std::endl;
		else
			std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: " << value << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float	: " << fvalue << "f" <<  std::endl;
		std::cout << "double	: " << dvalue << std::endl;
	}
	else
	{
		std::cout << "failed to convert value." << std::endl;
	}
}

ScalarConverter::~ScalarConverter()
{
}