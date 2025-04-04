/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 22:56:37 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/31 11:20:22 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string *stringPTR;
    std::string str;
    
    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std::string	&stringREF = str;

    std::cout << "adresse string: " << &str << std::endl;
    std::cout << "adresse stringPTR: " << stringPTR << std::endl;
    std::cout << "adresse stringREF: " << &stringREF << std::endl;
    std::cout << "value string: " << str << std::endl;
    std::cout << "value stringPTR: " << *stringPTR << std::endl;
    std::cout << "value stringREF: " << stringREF << std::endl;
}