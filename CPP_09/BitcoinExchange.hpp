#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>

class BitcoinExchange
{
	private:
	public:
		BitcoinExchange();
		BitcoinExchange(std::string &datafile);
		BitcoinExchange(BitcoinExchange const &object);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

};

#endif
