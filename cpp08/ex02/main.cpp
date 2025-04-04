/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/17 17:25:12 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
int	main(void)
{
	MutantStack<int> mutantStack;

	mutantStack.push(1);
	mutantStack.push(2);
	mutantStack.push(3);

	MutantStack<int>::iterator it = mutantStack.begin();

	for (; it != mutantStack.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	it -= 1;
	for (; it >= mutantStack.begin(); it--)
	{
		std::cout << *it << std::endl;
	}
	return (0);
}