/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:42:57 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 15:14:08 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
	private:
		std::stack<double> nb;
	public:
		RPN();
		RPN(RPN const &obj);
		RPN const &operator=(RPN const &obj);
		void	calcul(char *input);
		~RPN();
};

