/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/08/03 17:55:58 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	{
		int	a;
		int	b;

		a = 5;
		b = 10;
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		swap(&a, &b);
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;

		std::cout << "the minimum value between a and b is " << min(a, b) << std::endl;
		std::cout << "the max value between a and b is " << max(a, b) << std::endl;
	}
	{
		char	a;
		char	b;

		a = 'c';
		b = 'd';

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		swap(&a, &b);
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;

		std::cout << "the minimum value between a and b is " << min(a, b) << std::endl;
		std::cout << "the max value between a and b is " << max(a, b) << std::endl;
	}
	{
		double	a;
		double	b;

		a = 7.5;
		b = -9.6;

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		swap(&a, &b);
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;

		std::cout << "the minimum value between a and b is " << min(a, b) << std::endl;
		std::cout << "the max value between a and b is " << max(a, b) << std::endl;
	}

	return (0);
}