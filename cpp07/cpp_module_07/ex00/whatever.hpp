/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:43:59 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 14:44:00 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

template <typename T>
T min(T x, T y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template <typename T>
void swap(T *x, T *y)
{
	T temp;
	temp = *y;
	*y = *x;
	*x = temp;
}

#endif /* ******************************************************** WHATEVER_H */