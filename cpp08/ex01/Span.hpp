/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:37:34 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/17 15:43:37 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	_tab;
		unsigned int		_n;
		
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &obj);
		
		Span const	&operator=(Span const &obj);
		void		addNumber(int n);
		void		addLotNumber(unsigned int n);
		int			shortestSpan();
		int			longestSpan();
		~Span();

	class outOfBound : public std::exception
	{
		public:
		char const * what() const throw()
		{
			return ("out of limits.");
		}
	};
	class SpanNotFound : public std::exception
	{
		public:
		char const * what() const throw()
		{
			return ("Couldn't found any Span.");
		}
	};
};

