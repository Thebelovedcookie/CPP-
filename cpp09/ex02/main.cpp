/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:17:02 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/12/10 14:57:01 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        std::cerr << "not enough arg.." << std::endl;
        std::exit(-1);
    }

	PmergeMe p(argc, argv);
    
    p.sort_numbers_Q();
    
    return (0);
}