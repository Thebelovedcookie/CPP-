/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:47:19 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/05 14:31:42 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "PhoneBook.hpp"

void			red();
void			yellow();
void			violet();
void			reset();
std::string 	print_max(std::string str);
int		        str_is_printable(std::string str);
#endif