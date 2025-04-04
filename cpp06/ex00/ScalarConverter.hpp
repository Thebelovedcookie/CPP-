/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:44:28 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 14:44:29 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

class ScalarConverter
{
private:
	/* data */
	ScalarConverter(/* args */);
	ScalarConverter(ScalarConverter const &obj);
	ScalarConverter const &operator=(ScalarConverter const &obj);
public:
	static void convert(std::string obj);
	~ScalarConverter();
};


