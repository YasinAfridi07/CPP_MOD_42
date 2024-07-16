
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string.h>

template <typename anything>
void swap(anything &a, anything &b)
{
	anything tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename anytype>
anytype min(anytype &a, anytype &b)
{
	if(b <= a)
		return(b);
	return(a);
}

template<typename anytype>
anytype max(anytype &a, anytype &b)
{
	if(b >= a)
		return(b);
	return(a);
}


#endif
