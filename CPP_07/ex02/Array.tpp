

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array(): _size(0), _array(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n): _size(n), _array(new T[n])
{
}

template <typename T>
Array<T>::Array(Array const &object): _size(object._size)
{
	unsigned int i = 0;
	this->_array = new T[object._size];

	while (i < this->_size)
	{
		this->_array[i] = object._array[i];
		i++;
	}
}
template< typename T>
Array<T> & Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		if (this->_array && this->_size)
			delete[] this->_array;
		this->_size = rhs._size;
		this->_array = new T[rhs._size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	}

	return (*this);
}

template< typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n >= this->_size)
		throw std::runtime_error("Index out of bound");
	return this->_array[n];
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}


template< typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}


#endif
