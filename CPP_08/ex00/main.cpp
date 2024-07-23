

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include "easyfind.hpp"

int main() {

	std::vector<int> vec;
	vec.push_back(-1);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	try
	{
		std::cout << easyfind(vec, -1) <<std::endl;
		std::cout << easyfind(vec, 10) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() <<std::endl;
	}
	return 0;
}
