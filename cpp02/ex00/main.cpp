/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:13:37 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/12 14:01:42 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) 
{
    {
        Fixed a;
        Fixed b(a);
        Fixed c;
        
        c = b;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
    }
    {
        std::cout << "----------My tests--------------" << std::endl;
        Fixed d;
        
        std::cout << d.getRawBits() << std::endl;
        d.setRawBits(2);
        std::cout << d.getRawBits() << std::endl;
    }
    return 0;
}