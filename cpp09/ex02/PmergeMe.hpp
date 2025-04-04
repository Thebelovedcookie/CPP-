/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:21:23 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/12/10 14:44:40 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <sstream>
#include <utility>
#include <deque>
#include <algorithm>
#include <iterator>
#include <functional>

class PmergeMe
{
	private:
		int									odd_number;
		bool								is_odd;
		
	public:
		std::list<std::pair<int, int> >		pairList;
		std::deque<std::pair<int, int> >	pairDeque;
		std::list<int> greatestList;
		std::deque<int> greatestDeque;
		std::list<int>	unsortedList;
		PmergeMe(int argc, char **argv);
		void	recursionList(std::list<std::pair<int, int> > &pair);
		void	recursionDeque(std::deque<std::pair<int, int> > &pair);
		void	createpairs();
		void	FJMI();
		std::list<int> JacobstahlList(size_t lenght);
		std::deque<int> JacobstahlDeque(size_t lenght);
		int binarySearch(int value);
		void sort_numbers_Q();
		void	insertDeque();
		void	insertList();
		int		binarySearchDeque(int value);
		~PmergeMe();
};


