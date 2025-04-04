/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/17 15:45:37 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		std::cout << "test 1" << std::endl;
		Span obj(15000);
		
		obj.addLotNumber(15000);
		try {
		int shortest = obj.shortestSpan();
		int longest = obj.longestSpan();
		std::cout << "Shortest : " << shortest << std::endl;
		std::cout << "Longest : " << longest << std::endl;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "test 2" << std::endl;
		Span obj(1);

		obj.addLotNumber(1);
		try {
		int shortest = obj.shortestSpan();
		int longest = obj.longestSpan();
		std::cout << "Shortest : " << shortest << std::endl;
		std::cout << "Longest : " << longest << std::endl;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "test 3" << std::endl;
		Span obj(1);
		obj.addLotNumber(3);
		std::cout << std::endl;
	}
	
	return (0);
}