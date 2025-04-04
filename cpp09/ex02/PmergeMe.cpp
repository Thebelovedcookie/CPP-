/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:21:48 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/12/10 14:56:17 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		std::stringstream ss(argv[i]);
		int nb = -1;
		ss >> nb;
		if (ss.fail()) {
			std::cerr << "Error : Not an integer -> " << argv[i] << std::endl;
			ss.clear();
            std::exit(-1);
		} else if (nb < 0) {
			std::cerr << "Error : Negative number -> " << nb << std::endl;
            std::exit(-1);
		}
		std::list<int>::iterator it = unsortedList.begin();
		for (; it != unsortedList.end(); it++)
		{
			if (nb == *it)
			{
				std::cerr << "Error : double number -> " << nb << std::endl;
                std::exit(-1);
			}
		}
		this->unsortedList.push_back(nb);
	}
	std::cout << "Before: ";
	std::list<int>::iterator it = unsortedList.begin();
	for (; it != unsortedList.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::sort_numbers_Q()
{
    if(this->unsortedList.size() %2 != 0)
    {
        this->odd_number = this->unsortedList.back();
       	this->unsortedList.pop_back();
		this->is_odd = false;
    }
	else
	{
		this->is_odd = true;
	}
	
	createpairs();
	clock_t start1 = clock();
	recursionList(pairList);
	insertList();
	clock_t end1 = clock();
    double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;
	
	//sort with std::deque
	clock_t start2 = clock();
    recursionDeque(pairDeque);
	insertDeque();
    clock_t end2 = clock();
    double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;
	std::cout << "After: ";
	std::deque<int>::iterator it = greatestDeque.begin();
	for (;it != greatestDeque.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	//affichage du deuxieme conteneur
	// std::list<int>::iterator it2 = greatestList.begin();
	// std::cout << "After: ";
	// for (;it2 != greatestList.end(); it2++)
	// {
	// 	std::cout << *it2 << " ";
	// }
	// std::cout << std::endl;
    std::cout << "Time to process a range of " << greatestList.size() << " elements with std::list container: " << time1 << " us" << std::endl;
	std::cout << "Time to process a range of " << greatestDeque.size() << " elements with std::deque container: " << time2 << " us" << std::endl;

}

void PmergeMe::insertList()
{
    std::list<int> jacobstahlList = JacobstahlList(unsortedList.size());
    std::list<std::pair<int, int> >::iterator pairIt = pairList.begin();
    greatestList.push_back(pairIt->first);
    greatestList.push_back(pairIt->second);
    ++pairIt;

    for (; pairIt != pairList.end(); ++pairIt)
    {
        greatestList.push_back(pairIt->second);
    }

    std::list<int>::iterator jacobIt = jacobstahlList.begin();
    for (; jacobIt != jacobstahlList.end(); ++jacobIt)
    {
        int index = *jacobIt - 1;
        if (static_cast<size_t>(index) >= pairList.size())
            continue;

        pairIt = pairList.begin();
        std::advance(pairIt, index);

        int binaryIndex = binarySearch(pairIt->second);
        std::list<int>::iterator search = greatestList.begin();
        std::advance(search, binaryIndex);

        std::list<int>::iterator pos = std::upper_bound(greatestList.begin(), search, pairIt->first);
        
        greatestList.insert(pos, pairIt->first);
    }

    if (is_odd == false)
    {
        std::list<int>::iterator pos = std::upper_bound(greatestList.begin(), greatestList.end(), odd_number);
        greatestList.insert(pos, odd_number);
    }
}


void	PmergeMe::insertDeque()
{
	std::deque<int> jacobstahlDeque1 = JacobstahlDeque(unsortedList.size());
	
	greatestDeque.push_back(this->pairDeque.begin()->first);
	greatestDeque.push_back(this->pairDeque.begin()->second);
	 for (size_t i = 1; i < pairDeque.size() ; ++i)
	{
        greatestDeque.push_back(pairDeque[i].second);
	}
    for (size_t i = 0; i < jacobstahlDeque1.size(); i++)
    {
        if (size_t(jacobstahlDeque1[i] - 1) >= pairDeque.size())
            continue;
        int index = binarySearchDeque(pairDeque[jacobstahlDeque1[i] - 1].second);
        std::deque<int>::iterator search= greatestDeque.begin() + index;
        std::deque<int>::iterator pos = std::upper_bound(greatestDeque.begin(),search, pairDeque[jacobstahlDeque1[i] - 1].first );
        greatestDeque.insert(pos, pairDeque[jacobstahlDeque1[i] - 1].first);
    }
    if(is_odd == false)
    {
        std::deque<int>::iterator pos = std::upper_bound(greatestDeque.begin(),greatestDeque.end(), odd_number);
        greatestDeque.insert(pos, odd_number);
    }
}

int	PmergeMe::binarySearchDeque(int value)
{
	std::deque<int>::iterator low = greatestDeque.begin();
    std::deque<int>::iterator high = greatestDeque.end() - 1;

    while (low <= high) {
        std::deque<int>::iterator mid = low + (high - low) / 2;

        if (*mid == value) {
            return std::distance(greatestDeque.begin(), mid);
        }

        if (*mid < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int PmergeMe::binarySearch(int value)
{
    
	int left = 0;
    int right = greatestList.size() - 1;
    int mid;
    std::list<int>::iterator it;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        it = greatestList.begin();
        std::advance(it, mid);

        if (*it == value)
            return mid;

        if (*it < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}

void	PmergeMe::createpairs()
{
	std::list<int>::iterator it = unsortedList.begin();

	size_t size = unsortedList.size();
	if (size % 2 != 0)
	{
		size -= 1;
		is_odd = false;
		odd_number = unsortedList.size()-1;
	}
	
	for (size_t i = 0; i < size / 2 ; it++, i++)
	{
		int one = *it;
		it++;
		int two = *it;
		if (one > two)
		{
			this->pairList.push_back(std::make_pair(two, one));
			this->pairDeque.push_back(std::make_pair(two, one));
		}
		else
		{
			this->pairList.push_back(std::make_pair(one, two));
			this->pairDeque.push_back(std::make_pair(one, two));
		}
	}
}

static void mergeList(std::list<std::pair<int, int> > left, std::list<std::pair<int, int> > right, std::list<std::pair<int, int> > &pair)
{
	pair.clear();

	std::list<std::pair<int, int> >::iterator it_left = left.begin();
	std::list<std::pair<int, int> >::iterator it_right = right.begin();

	while (it_left != left.end() && it_right != right.end())
	{
		if (it_left->second < it_right->second)
		{
			pair.push_back(*it_left);
			++it_left;
		}
		else
		{
			pair.push_back(*it_right);
			++it_right;
		}
	}
	while (it_left != left.end())
	{
		pair.push_back(*it_left);
		++it_left;
	}
	while (it_right != right.end())
	{
		pair.push_back(*it_right);
		++it_right;
	}
}

static void	mergeDeque(std::deque<std::pair<int, int> > left, std::deque<std::pair<int, int> > right, std::deque<std::pair<int, int> > &pair)
{
	size_t index_left = 0;
	size_t index_right = 0;
	size_t index = 0;
	
	while (index_left < left.size() && index_right < right.size())
	{
		if(left[index_left].second < right[index_right].second)
			pair[index++] = left[index_left++];
		else
			pair[index++] = right[index_right++];
	}
	while (index_left < left.size())
	{
		pair[index++] = left[index_left++];
	}
	while (index_right < right.size())
	{
		pair[index++] = right[index_right++];
	}
}

void	PmergeMe::recursionList(std::list<std::pair<int, int> > &pair)
{
	if (pair.size() == 1)
		return ;
	size_t half = pair.size() / 2;

	std::list<std::pair<int, int> >::iterator mid = pair.begin();

	std::advance(mid, half);
	
	std::list<std::pair<int, int> > left(pair.begin(), mid);
	std::list<std::pair<int, int> > right(mid, pair.end());

	recursionList(left);
	recursionList(right);
	
	mergeList(left, right, pair);
}

void	PmergeMe::recursionDeque(std::deque<std::pair<int, int> > &pair)
{
	if (pair.size() == 1)
		return ;
	size_t half = pair.size() / 2;

	std::deque<std::pair<int, int> > left(pair.begin(), pair.begin() + half);
	std::deque<std::pair<int, int> > right(pair.begin() + half, pair.end());

	recursionDeque(left);
	recursionDeque(right);
	
	mergeDeque(left, right, pair);
}

PmergeMe::~PmergeMe()
{
}

std::deque<int> PmergeMe::JacobstahlDeque(size_t lenght) 
{
    std::deque<int> jacobindx;
    int jacobsthalArray[lenght];

    jacobsthalArray[0] = 0;
    jacobsthalArray[1] = 1;
    int lastJNum = 2;

    for (size_t i = 2; jacobindx.size() < lenght; i++)
    {
        jacobsthalArray[i] = jacobsthalArray[i - 1] + 2 * jacobsthalArray[i - 2];
        if(i != 2)
            jacobindx.push_back(jacobsthalArray[i]);

        for (int j = jacobsthalArray[i] - 1; j > lastJNum; j--)
            jacobindx.push_back(j);
        lastJNum = jacobsthalArray[i];
    }
    return (jacobindx);
}

std::list<int> PmergeMe::JacobstahlList(size_t lenght) 
{
    std::list<int> jacobindx;
    int jacobsthalArray[lenght];

    jacobsthalArray[0] = 0;
    jacobsthalArray[1] = 1;
    int lastJNum = 2;

    for (size_t i = 2; jacobindx.size() < lenght; i++)
    {
        jacobsthalArray[i] = jacobsthalArray[i - 1] + 2 * jacobsthalArray[i - 2];
        if(i != 2)
            jacobindx.push_back(jacobsthalArray[i]);

        for (int j = jacobsthalArray[i] - 1; j > lastJNum; j--)
            jacobindx.push_back(j);
        lastJNum = jacobsthalArray[i];
    }
    return (jacobindx);
}