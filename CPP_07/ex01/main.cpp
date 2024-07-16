

#include "iter.hpp"

int main()
{
	int array1[5] = {1,2,3,4,5};
	iter(array1, 5, printarray);

	std::string str[2] = {"hello", "world"};
	iter(str, 2, printarray);

	char array2[3] = {'a', 'b', 'c'};
	iter(array2, 3, printarray);
	
	return(0);

}
