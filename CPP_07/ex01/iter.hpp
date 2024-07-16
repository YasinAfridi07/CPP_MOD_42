#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename anytype>
void printarray(anytype const &array)
{
	std::cout << array << std::endl;
}

template<typename anytype>
void	iter(anytype *arr, int len, void(*f)(anytype const &array))
{
	int i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}

#endif
