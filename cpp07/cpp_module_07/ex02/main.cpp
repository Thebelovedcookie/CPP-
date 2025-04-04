/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/17 14:10:17 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++) {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++) {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        } try {
            numbers[-2] = 0;
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
        try {
            numbers[MAX_VAL] = 0;
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++) {
            numbers[i] = rand();
        }
        delete [] mirror;//
    }
    {
        Array<char> letter(2);
        letter[0] = 'a';
        letter[1] = 'b';
        Array<char> copie;
        copie = letter;
        for (unsigned int i = 0; i < copie.size(); i++)
        {
            std::cout << copie[i] << std::endl;
        }
    }
    return 0;
}