#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <string>


template<typename T>
int	easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n); // what does end() and begin() function return
	if (it == container.end())
		throw std::runtime_error("No Occurrence Found");
	return *it;
}

#endif
