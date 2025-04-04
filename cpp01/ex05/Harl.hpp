/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:24:47 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/31 19:59:23 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void    debug(void);
		void    info(void);
		void    warning(void);
		void    error(void);
	public:
		Harl(/* args */);
		void complain(std::string level);
		~Harl();
};

#endif /*HARL.HPP*/