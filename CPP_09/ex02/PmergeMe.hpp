#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <algorithm>

class PmergeMe
{
	private:
		std::vector<int> _vectorSorted;
		std::vector<int> _vectorUnsorted;
		std::vector<std::pair<int, int> > _vectorPaired;

		std::list<int> _listSorted;
		std::list<int> _listUnsorted;
		std::list <std::pair<int,int> > _listPaired;

		double _vectorSorttime;
		double _listSorttime;

	public:
		PmergeMe();
		PmergeMe(const char **av);
		PmergeMe(const PmergeMe &object);
		PmergeMe &operator=(const PmergeMe &rhs);
		~PmergeMe();

		void vectorSort();
		void listSort();
		void output();
};

#endif
