/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:43:33 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 14:43:33 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _n(0)
{
	this->_tab.reserve(this->_n);
}

Span::Span(unsigned int n): _n(n)
{
	this->_tab.reserve(this->_n);
}

Span::Span(Span const &obj)
{
	this->_tab = obj._tab;
	this->_n = obj._n;
}

Span const &Span::operator=(Span const &obj)
{
	this->_tab = obj._tab;
	this->_n = obj._n;
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_tab.size() <= this->_n)
		this->_tab.push_back(n);
	else
		throw outOfBound();
}

void Span::addLotNumber(unsigned int n)
{
	srand(time(0));
	try {
		for (unsigned int i = 0; i < n; i++)
		{
			this->addNumber(rand());
		}
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

int Span::shortestSpan()
{
	if (this->_tab.size() < 2)
	{
		throw SpanNotFound();
	}
 	int shortest = __INT_MAX__;
	std::vector<int>sortedTab = _tab;
	std::sort(sortedTab.begin(), sortedTab.end());

	std::vector<int>::iterator it1 = sortedTab.begin();
	std::vector<int>::iterator it2 = sortedTab.begin() + 1;
	for (; it2 != sortedTab.end(); it1++, it2++)
	{
		int diff = *it2 - *it1;
		if (diff < shortest)
			shortest = diff;
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (this->_tab.size() < 2)
	{
		throw SpanNotFound();
	}
	int minNum = *std::min_element(_tab.begin(), _tab.end());
    int maxNum = *std::max_element(_tab.begin(), _tab.end());

    return (maxNum - minNum);
}

Span::~Span()
{
	_tab.clear();
	std::vector<int> empty;
	_tab.swap(empty);
}