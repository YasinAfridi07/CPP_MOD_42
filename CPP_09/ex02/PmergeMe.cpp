
#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{}


PmergeMe::PmergeMe(const PmergeMe &object)
{
	*this = object;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
	if (this != &src)
	{
		_listSorted = src._listSorted;
		_listPaired = src._listPaired;
		_listUnsorted = src._listUnsorted;
		_vectorSorted = src._vectorSorted;
		_vectorPaired = src._vectorPaired;
		_vectorUnsorted = src._vectorUnsorted;
		_vectorSorttime = src._vectorSorttime;
		_listSorttime = src._listSorttime;
	}
	return (*this);
}

PmergeMe::PmergeMe(const char **av)
{
	int num;

	for (size_t i = 1; av[i]; i++)
	{
		if (std::istringstream(av[i]) >> num && num >= 0)
		{
			this->_listUnsorted.push_back(num);
			this->_vectorUnsorted.push_back(num);
		}
		else
		{
			throw std::runtime_error("Error: must be positive number!");
		}
	}
}

void PmergeMe::vectorSort()
{
	clock_t	startTime;

	startTime = clock();
	for (size_t i = 0; i < this->_listUnsorted.size(); i++)
	{
		if (i == 0 && this->_vectorUnsorted.size() % 2)
		{
			this->_vectorPaired.push_back(std::make_pair(-1, this->_vectorUnsorted[i]));
		}
		else
		{
			this->_vectorPaired.push_back(std::make_pair(this->_vectorUnsorted[i], this->_vectorUnsorted[i + 1]));
			i++;
		}
	}
	for (std::vector<std::pair<int,int> >::iterator it = _vectorPaired.begin(); it != _vectorPaired.end(); it++)
	{
		if ((*it).first > (*it).second)
			std::swap((*it).first, (*it).second);
	}
	for (std::vector<std::pair<int, int> >::iterator it = _vectorPaired.begin() + 1; it != _vectorPaired.end(); it++)
	{
		std::vector<std::pair<int, int> >::iterator current = it;
		std::vector<std::pair<int, int> >::iterator prev = it - 1;
		while ((*current).first < (*prev).first)
		{
			std::swap((*current), (*prev));
			if (prev != _vectorPaired.begin())
			{
				current = prev;
				prev = current - 1;
			}
		}
	}
	for (std::vector<std::pair<int,int> >::iterator it = _vectorPaired.begin(); it != _vectorPaired.end(); it++)
	{
		if (it->first != -1)
			this->_vectorSorted.push_back(it->first);
	}
	for (std::vector<std::pair<int,int> >::iterator it = _vectorPaired.begin(); it != _vectorPaired.end(); it++)
	{
		std::vector<int>::iterator itSort;
		itSort = std::lower_bound(_vectorSorted.begin(), _vectorSorted.end(), it->second);
		this->_vectorSorted.insert(itSort, it->second);
	}
	this->_vectorSorttime = static_cast<double>((clock() - startTime) * 100.0 / CLOCKS_PER_SEC);
}

void PmergeMe::listSort()
{
	clock_t startTime;

  	startTime = clock();

	for (std::list<int>::iterator it = this->_listUnsorted.begin(); it != this->_listUnsorted.end(); it++)
	{
		if (this->_listUnsorted.size() % 2 && it == this->_listUnsorted.begin())
		{
			this->_listPaired.push_back(std::make_pair(-1, *it));
		}
		else
		{
			std::list<int>::iterator next = it;
			next++;
			this->_listPaired.push_back(std::make_pair(*it, *next));
			it++;
		}
	}
	for (std::list<std::pair<int,int> >::iterator it = this->_listPaired.begin(); it != this->_listPaired.end(); it++)
	{
		if (it->first > it->second)
		{
			std::swap(it->first, it->second);
		}
	}
	for (std::list<std::pair<int,int> >::iterator it = std::next(this->_listPaired.begin()); it != this->_listPaired.end(); it++)
	{
		std::list<std::pair<int, int> >::iterator current = it;
		std::list<std::pair<int, int> >::iterator prev = std::prev(it);
		;

		while (current->first < prev->first)
		{
			std::swap(*current, *prev);
			if (prev != this->_listPaired.begin())
			{
				current = prev;
				prev = std::prev(current);
			}
		}
	}
	for (std::list<std::pair<int,int> >::iterator it = this->_listPaired.begin(); it != this->_listPaired.end(); it++)
	{
		if (it->first != -1)
			this->_listSorted.push_back(it->first);
	}
	for (std::list<std::pair<int,int> >::iterator it = this->_listPaired.begin(); it != this->_listPaired.end(); it++)
	{
		std::list<int>::iterator itSort = std::lower_bound(this->_listSorted.begin(),
			this->_listSorted.end(), it->second);
		this->_listSorted.insert(itSort, it->second);
	}

	clock_t end = clock();

	this->_listSorttime = static_cast<double>((end - startTime) * 100.0 / CLOCKS_PER_SEC);
}

void PmergeMe::output()
{
  std::cout << "Before : ";
  for(std::vector<int>::iterator it = this->_vectorUnsorted.begin(); it !=_vectorUnsorted.end(); it++)
      std::cout << *it << " ";
  std::cout << '\n';
  std::cout << "After : ";
  for(std::vector<int>::iterator it = this->_vectorSorted.begin(); it !=_vectorSorted.end(); it++)
      std::cout << *it << " ";
  std::cout << '\n';
  std::cout << "Time to process a range of " << this->_vectorUnsorted.size() << " elements with std::vector : " << this->_vectorSorttime << " us" << '\n';
  std::cout << "Time to process a range of " << this->_listUnsorted.size() << " elements with std::list   : " << this->_listSorttime << " us" << '\n';
}
