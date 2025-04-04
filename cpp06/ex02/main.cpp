/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:25:09 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/16 12:49:12 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>

Base* createA() {return new A();}
Base* createB() {return new B();}
Base* createC() {return new C();}

Base *generate(void)
{
	srand(time(0));
	int random = rand();
	int	choose = random % 3;

 	Base* (*createClass[])(void) = {&createA, &createB, &createC};
    return createClass[choose]();
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p)) {
        std::cout << "p: A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "p: B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "p: C" << std::endl;
	}
}


void identify(Base& p) {
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "p: A" << std::endl;
		(void)a;
        return;
    } catch (std::exception &e) {
        std::cout << "It is not an A class." << std::endl;
    }

    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "p: B" << std::endl;
		(void)b;
        return;
    } catch (std::exception &e) {
        std::cout << "It is not a B class." << std::endl;
    }

    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "p: C" << std::endl;
		(void)c;
		return ;
    } catch (std::exception &e) {
        std::cout << "That's getting weird.." << std::endl;
	}
}

int	main(void)
{
	Base *obj = generate();
	identify(obj);
	identify(*obj);
    delete obj; 
	return (0);
}