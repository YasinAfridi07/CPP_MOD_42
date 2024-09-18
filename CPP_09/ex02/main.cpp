#include "PmergeMe.hpp"

int main(int ac, char const *av[])
{
	if (ac < 2)
		return(1);
	try
	{
		PmergeMe sort_object(av);
		sort_object.vectorSort();
		sort_object.listSort();
		sort_object.output();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
