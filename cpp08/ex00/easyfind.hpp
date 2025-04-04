/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:02:14 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/17 14:34:28 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class VectorNotFound : public std::exception
{
	public:

		char const * what() const throw()
		{
			return ("number not found");
		}
};

template <typename T>
int *easyfind(T &container, int num)
{
	typename T::iterator i = std::find(container.begin(), container.end(), num);
	
	if (i == container.end())
		throw VectorNotFound();
	return (&(*i));
}
