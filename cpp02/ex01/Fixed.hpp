/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:19:55 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/12 13:58:01 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <cmath>
#include <iostream>
#include <cstdio>

class Fixed
{
    private:
        int                 virgule_fixe;
        static const int    nb_bits_fract = 8;
        
    public:
		//Constructor
        Fixed(void);
		//Copy constructor
		Fixed(const Fixed &original);
		//Destructor
        ~Fixed();
        //Operator Overloading
        Fixed	&operator=(const Fixed &original);
        int     getRawBits(void)const;
        void    setRawBits(int const raw);
        //ex_01
            //constructor
            Fixed(const int toComaInt);
            Fixed(const float toComaFloat);
            //member methode
            float   toFloat(void)const;
            int     toInt(void)const;
};

std::ostream &operator<<(std::ostream &cOUT, Fixed const &Instance);

#endif /*Fixed*/