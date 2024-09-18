#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _btcdata;
		bool isLeapYear(int year);
		bool isValidDateStr(std::string &datestr);
		bool isValidDate(std::string &dateString);
		double lowerBound(std::string &dataString);

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string &dataFile);
		BitcoinExchange(BitcoinExchange const &object);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		int parseInputValue(std::string &line, std::string &value);
		void readInputFile(const std::string &inputFile);

};

#endif
