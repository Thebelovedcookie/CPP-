/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:42:55 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/12/10 14:57:40 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(RPN const &obj)
{
	(void)obj;
}

RPN const &RPN::operator=(RPN const &obj)
{
	(void)obj;
	return (*this);
}

void RPN::calcul(char *input)
{
	std::string rpn(input);
	for (size_t i = 0; i < rpn.size(); i++)
	{
		if (rpn.at(i) == ' ')
			continue ;
		else if (rpn.at(i) <= '9' && rpn.at(i) >= '0')
		{
			std::string numbers = "";
			while (rpn.at(i) <= '9' && rpn.at(i) >= '0')
			{
				numbers += rpn.at(i);
				i++;
			}
			int	converted;
			std::stringstream ss(numbers);
			ss >> converted;
			this->nb.push(converted);
			
		}
		else if (rpn.at(i) == '+' || rpn.at(i) == '-' || rpn.at(i) == '/' || rpn.at(i) == '*')
		{
			if (this->nb.size() > 1)
			{
				int	nb1 = this->nb.top();
				this->nb.pop();
				int nb2 = this->nb.top();
				this->nb.pop();
				if (rpn.at(i) == '+')
					this->nb.push(nb2 + nb1);
				else if (rpn.at(i) == '-')
					this->nb.push(nb2 - nb1);
				else if (rpn.at(i) == '/')
				{
					if (nb1 == 0)
					{
						std::cerr << "divide by 0 is not allowed." << std::endl;
						return ;
					}
					this->nb.push(nb2 / nb1);
				}
				else if (rpn.at(i) == '*')
					this->nb.push(nb2 * nb1);
			}
		}
		if (this->nb.size() > 3)
		{
			std::cerr << "bad line argument." << std::endl;
		}
	}
	std::cout << this->nb.top() << std::endl;
	this->nb.pop();
}

RPN::~RPN()
{
}