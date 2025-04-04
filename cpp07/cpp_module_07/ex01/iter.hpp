/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:44:08 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 14:44:09 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void iter(T *array, size_t arr_len, void (*func)(T &))
{
	if (array == NULL || arr_len == 0)
		return ;
	for (size_t i = 0; i < arr_len; i++)
		func(array[i]);
}

#endif /* ******************************************************** ITER_H */