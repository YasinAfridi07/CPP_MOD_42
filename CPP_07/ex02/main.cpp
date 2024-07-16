#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> z(5);

	z[0] = 1;
	z[1] = 2;
	z[2] = 3;
	z[3] = 4;
	z[4] = 5;




	Array<int> y(z);
	y = z;
	try
	{
		std::cout << y[0] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << y[1] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << y[-3];
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return(0);
}

