#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if(this != &rhs)
	{
	}
	return(*this);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &object)
{
	*this = object;
}

bool BitcoinExchange::isLeapYear(int year)
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool BitcoinExchange::isValidDate(std::string &dateString)
{
	std::istringstream parse(dateString);
	int year, month, day;
	char line1, line2;

	parse >> year >> line1 >> month >> line2 >> day;

	if (parse.fail() || line1 != '-' || line2 != '-')
		return false;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	if (month == 2)
	{
		if (isLeapYear(year))
			return (day <= 29);
		else
			return (day <= 28);
	}
	return true;
}

double BitcoinExchange::lowerBound(std::string &dataString)
{
	std::map<std::string, double>::iterator it = _btcdata.lower_bound(dataString);
	if (it != _btcdata.begin())
	{
		if (it->first != dataString)
			it--;
	}
	return (it->second);
}


BitcoinExchange::BitcoinExchange(const std::string &dataFile)
{
	size_t delimiterIndex;
	double	rate;
	std::string line;

	std::ifstream file(dataFile.c_str());
	if(!file.is_open())
	{
		std::cerr << "Error, Unable to open data.csv file" << std::endl;
		std::exit(1);
	}
	std::getline(file, line);
	while (std::getline(file, line))
	{
		delimiterIndex = line.find(',');
		if(delimiterIndex != std::string::npos)
		{
			std::string date = line.substr(0, delimiterIndex);
			std::string rate_str = line.substr(delimiterIndex + 1);
			try
			{
				if(!isValidDate(date))
				{
					std::cerr << "Error, Invalid Data Format " << date <<std::endl;
					continue ;
				}
				rate = std::strtod(rate_str.c_str(), NULL);
				_btcdata[date] = rate;
			}
			catch(...)
			{
				std::cerr << "Error, Invalid date" << std::endl;
			}
		}
	}
	file.close();
}

int BitcoinExchange::parseInputValue(std::string &line, std::string &value)
{
	if (value.empty())
		return(0);
	if(value[0] != ' ')
	{
		std::cout << "Error, Invalid input " << line << std::endl;
		return(0);
	}
	if(value[1] == '-')
	{
		if (std::isdigit(value[2]))
			std::cout << "Error, not a positive number." << std::endl;
		else
			std::cout << "Error: bad input" << line << std::endl;
		return (0);
	}
	int i = 1;
	while (i < (int)value.size())
	{
		if(value[i] != '.' && !std::isdigit(value[i]))
		{
			std::cout << "Error, bad input " << line << std::endl;
			return (0);
		}
		i++;
	}
	if(std::count(value.begin(), value.end(), '.') > 1)
	{
		std::cout << "Error, Invalid value " << value << std::endl;
		return(0);
	}
	return(1);
}
bool BitcoinExchange::isValidDateStr(std::string &dateStr)
{
  if (dateStr.length() != 11)
    return false;
  dateStr.pop_back();
  if (dateStr.find_first_not_of("0123456789-") != std::string::npos)
    return false;
	std::istringstream ss(dateStr);
	int year, month, day;
	char dash1, dash2;
	ss >> year >> dash1 >> month >> dash2 >> day;
	if (ss.fail() || dash1 != '-' || dash2 != '-')
		return (false);
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return (false);
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return (day <= 30);
	if (month == 2)
		return (isLeapYear(year) ? day <= 29 : day <= 28);
	return (true);
}

void BitcoinExchange::readInputFile(const std::string &inputFile)
{
	std::ifstream inFile(inputFile.c_str());
	if(!inFile.is_open())
	{
		std::cerr << "Error, could not open input file" << std::endl;
		std::exit(1);
	}

	std::string line;
	std::getline(inFile, line);
	if(line != "date | value")
	{
		std::cerr << "Error, Wrong Header for Input File" << std::endl;
		exit(1);
	}
	while (std::getline(inFile, line))
	{
		size_t delimiterIndex = line.find('|');
		if(delimiterIndex != std::string::npos)
		{
			std::string dateString = line.substr(0, delimiterIndex);
			std::string valueString = line.substr(delimiterIndex + 1);
			if(parseInputValue(line, valueString) == 0)
				exit(1);

			try
			{
				if(!isValidDateStr(dateString))
				{
					std::cerr << "Error, Invalid date" << dateString << std::endl;
					continue;
				}
				if(dateString > "2022-03-29" || dateString < "2009-01-02")
				{
					std::cout << "Error" << std::endl;
					continue;
				}
				double value = std::strtod(valueString.c_str(), NULL);
				if (value < 0)
				{
					std::cerr << "Error: not a positive number!" << std::endl;
					continue ;
				}
				if (value >= 1000)
				{
					std::cerr << "Error: too large a number!" << std::endl;
					continue ;
				}
				double exchangeRate = lowerBound(dateString);
				double calculateValue = value * exchangeRate;
				std::cout << dateString << " => " << value << " = " << calculateValue << std::endl;

			}
			catch(...)
			{
				std::cerr << "Error, Invalid" << std::endl;
			}
		}
		else
		{
			std::cerr << "Error " << line << std::endl;
		}
	}
	inFile.close();
}



