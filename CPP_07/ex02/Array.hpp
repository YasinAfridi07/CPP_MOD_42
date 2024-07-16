#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <ctime>
# include <cstdlib>
# include <climits>

template < typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_array;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &object);
		Array &operator=(Array const &rhs);
		T & operator[](unsigned int n);
		unsigned int size() const;
		~Array();
};

#include "Array.tpp"

#endif
