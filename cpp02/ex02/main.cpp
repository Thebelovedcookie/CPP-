/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:13:37 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/12 17:06:20 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main(void)
{

	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "a est = ";
	std::cout << a << std::endl;
	std::cout << "++a est = ";
	std::cout << ++a << std::endl;
	std::cout << "a est = ";
	std::cout << a << std::endl;
	std::cout << "a++ est = ";
	std::cout << a++ << std::endl;
	std::cout << "a est = ";
	std::cout << a << std::endl;
	std::cout << "b est = ";
	std::cout << b << std::endl;
	std::cout << "le plus grand entre a et b est -> ";
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "--------------my test--------------" << std::endl;
	
	Fixed c;
	
	std::cout << "c = a + b ";
	c = a + b;
	std::cout << "c est = ";
	std::cout << c << std::endl;
	std::cout << "le plus grand entre c et b est -> ";
	std::cout << Fixed::max(c, b) << std::endl;

	Fixed d;
	Fixed e;

	std::cout << "d est = ";
	std::cout << d << std::endl;
	std::cout << "e = c / d = ";
	e = c / d;
	std::cout << e << std::endl;
	std::cout << "vrai calcul = ";
	std::cout << c/0.0f << std::endl;
	{
		std::cout << "--------------compare--------------" << std::endl;
		Fixed aa(1);
		Fixed bb(2);
		Fixed cc(2);
		
		if (aa > bb)
			std::cout << "> : if you read this, i'm not working properly" << std::endl;
		if (bb > aa)
			std::cout << "> : i'm working properly" << std::endl;
		if (cc >= bb)
			std::cout << ">= : i'm working properly" << std::endl;
		if (aa >= bb)
			std::cout << ">= : if you read this, i'm not working properly" << std::endl;
		if (aa < bb)
			std::cout << "< : i'm working properly" << std::endl;
		if (bb < aa)
			std::cout << "< : if you read this, i'm not working properly" << std::endl;
		if (cc <= bb)
			std::cout << "<= : i'm working properly" << std::endl;
		if (bb <= aa)
			std::cout << "<= : if you read this, i'm not working properly" << std::endl;
		if (cc == bb)
			std::cout << "== : i'm working properly" << std::endl;
		if (aa == bb)
			std::cout << "== : if you read this, i'm not working properly" << std::endl;
		if (aa != bb)
			std::cout << "!= : i'm working properly" << std::endl;
		if (cc != bb)
			std::cout << "!= : if you read this, i'm not working properly" << std::endl;
	}
	{
		std::cout << "--------------operator + - / * --------------" << std::endl;
		Fixed aa(1);
		Fixed bb(2);
		Fixed cc;

		cc = aa + bb;
		std::cout << "c = a + b " << std::endl;
		std::cout << cc  << " = " << aa << " + " << bb << std::endl;
		
		cc = aa - bb;
		std::cout << "c = a - b " << std::endl;
		std::cout << cc  << " = " << aa << " - " << bb << std::endl;

		cc = aa / bb;
		std::cout << "c = a / b " << std::endl;
		std::cout << cc  << " = " << aa << " / " << bb << std::endl;

		cc = aa * bb;
		std::cout << "c = a * b " << std::endl;
		std::cout << cc  << " = " << aa << " * " << bb << std::endl;
	}
	return (0);
}
