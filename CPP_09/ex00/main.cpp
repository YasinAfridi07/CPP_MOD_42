#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cerr << "Error, Need 2 arugments, <Excuteable> and <Input>" << std::endl;
		return (1);
	}
	std::cout << std::fixed << std::setprecision(2);

	BitcoinExchange btc("data.csv");
	btc.readInputFile(av[1]);
}
