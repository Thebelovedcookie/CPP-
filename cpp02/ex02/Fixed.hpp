/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:19:55 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/12 13:59:49 by mmahfoud         ###   ########.fr       */
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
        int						virgule_fixe;
        static const int		nb_bits_fract = 8;
        
    public:
        //ex_00
            //Constructor
            Fixed(void);
            //Copy constructor
            Fixed(const Fixed &original);
            //Destructor
            ~Fixed();
            //Operator Overloading
            Fixed	       		&operator=(const Fixed &original);
            int           		getRawBits(void)const;
            void          		setRawBits(int const raw);
        //ex_01
            //constructor
            Fixed(const int toComaInt);
            Fixed(const float toComaFloat);
            //member methode
            float               toFloat(void)const;
            int                 toInt(void)const;
        //ex_02
            int			    	operator>(Fixed const &right) const;
            int			    	operator<(Fixed const &right) const;
            int			    	operator>=(Fixed const &right) const;
            int			    	operator<=(Fixed const &right) const;
            int			    	operator==(Fixed const &right) const;
            int			    	operator!=(Fixed const &right) const;
            Fixed		    	operator+(Fixed const &right) const;
            Fixed		    	operator-(Fixed const &right) const;
            Fixed		    	operator*(Fixed const &right) const;
            Fixed			    operator/(Fixed const &right) const;
			Fixed			    &operator++(void);
			Fixed			    &operator--(void);
			Fixed			    operator++(int);
			Fixed			    operator--(int);
            static Fixed	    &min(Fixed &a, Fixed &b);
            static Fixed	    &max(Fixed &a, Fixed &b);
            static const Fixed	&min(Fixed const &a, Fixed const &b) ;
            static const Fixed	&max(Fixed const &a, Fixed const &b) ;
};

std::ostream &operator<<(std::ostream &cOUT, Fixed const &Instance);

#endif /*Fixed*/