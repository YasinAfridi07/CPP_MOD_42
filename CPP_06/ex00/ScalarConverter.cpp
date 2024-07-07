
#include "ScalarConverter.hpp"
#include <stdio.h>

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& object)
{
	*this = object;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& rhs)
{
	(void)rhs;
	return *this;
}

char toChar(const std::string str)
{
	return str.empty() ? '\0' : str[0];
}

int toInt(const std::string str)
{
	std::stringstream str_object(str);
	int value;
	str_object >> value;
	return(value);
}

float toFloat(const std::string str)
{
	std::string str2 = str;
	if(str2[str2.length() - 1] == 'f')
	{
		str2 = str2.substr(0, str2.length() - 1);
	}
	std::stringstream str_object(str2);
	float value;
	str_object >> value;
	return(value);
}

double toDouble(const std::string str)
{
	std::string str2 = str;
	std::stringstream str_object(str2);
	double value;
	str_object >> value;
	return(value);
}

bool isChar(std::string str)
{
	return (str.length() == 1 && std::isalpha(str[0]) && std::isprint(str[0]));
}

bool isInt(std::string str)
{
	int j = 0;
	if(str[j] == '-' || str[j] == '+')
		j++;
	for(int i(j); i < (int) str.length(); i++)
	{
		if(!std::isdigit(str[i]))
			return false;
	}
	return true;

}

bool isFloat(std::string str)
{
	if(str.find( '.' ) == std::string::npos || str.back() != 'f' || str.find('.') == 0 || str.find('.') == str.length() - 2)
		return false;

	int found = 0;
	int j = 0;

	if(str[j] == '-' || str[j] == '+')
		j++;
	for(int i(j); i < (int)str.length() - 1; i++)
	{
		if(str[i] =='.')
			found++;
		if((!std::isdigit(str[i]) && str[i] != '.') || found > 1)
			return false;
	}
	return true;
}

bool isDouble(std::string str)
{
	if(str.find('.') == std::string::npos || str.find('.') == 0 || str.find('.') == str.length() - 1)
		return false;

	int j = 0;
	int found = 0;

	if(str[j] == '-' || str[j] == '+')
		j++;
	for (int i(j); i < (int)str.length(); i++)
		{
			if(str[i] == '.')
				found++;
			if((!std::isdigit(str[i]) && str[i] != '.') || found > 1)
				return false;
		}
		return true;
}

bool isLiterals(std::string str)
{
	if (str.compare("nan") == 0 || str.compare("nanf") == 0
		|| str.compare("+inf") == 0 || str.compare("+inff") == 0
		|| str.compare("-inf") == 0 || str.compare("-inff") == 0)
		return true;
	return false;
}

void printChar(std::string str, bool impossible, char c, int i)
{
	if(impossible || isLiterals(str) || (!std::isprint(i) && i > 127))
		std::cout << "Impossible" << std::endl;
	else if(!std::isprint(i))
		std::cout << "Non Displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
}

void printInt(std::string str, bool impossible, int i)
{
	if(impossible || isLiterals(str) || (!std::isprint(i) && i > 127))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << i << std::endl;
}

void printFloat(std::string str, bool impossible, float f)
{
	if(str.compare("nan") == 0 || str.compare("nanf") == 0)
		std::cout << "nanf" << std::endl;
	else if(str.compare("+inff") == 0 || str.compare("+inf") == 0)
		std::cout << "+inff" <<std::endl;
	else if(str.compare( "-inff" ) == 0 || str.compare( "-inf" ) == 0)
		std::cout << "-inff" << std::endl;
	else if (impossible)
		std::cout << "Impossible" << std::endl;
	else
	{
		if( f - static_cast<int>(f) == 0)
			std::cout << f << ".0f" << std::endl;
		else
			std::cout << f << "f" << std::endl;
	}
}

void printDouble(std::string str, bool impossible, double d)
{
	if (str.compare( "nan" ) == 0 || str.compare( "nanf" ) == 0)
		std::cout << "nan";
	else if (str.compare( "+inff" ) == 0 || str.compare( "+inf" ) == 0)
		std::cout << "+inf";
	else if (str.compare( "-inff" ) == 0 || str.compare( "-inf" ) == 0)
		std::cout << "-inf";
	else if (impossible)
	std::cout << "Impossible";
	else
	{
		if (d - static_cast<int>(d) == 0)
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
}

void ScalarConverter::convert(std::string str)
{
	bool Impossible = false;
	char c = '\0';
	int i = 0;
	float f = 0.0f;
	double d =0.0;

	try{
		if(isChar(str))
		{
			c = toChar(str);
			i = static_cast<int>(c);
			f = static_cast<float>(c);
			d = static_cast<double>(c);
		}
		else if (isInt(str))
		{
			i = toInt(str);
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
		}
		else if (isDouble(str))
        {
            d = toDouble(str);
            i = static_cast<int>(d);
            f = static_cast<float>(d);
            c = static_cast<char>(d);
        }
		else if(isFloat(str))
		{
			f = toFloat(str);
			c = static_cast<char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
		}
		else
		{
			Impossible = true;
		}
		std::cout << "char = "; printChar(str, Impossible, c, i);
		std::cout << "int = "; printInt(str, Impossible, i);
		std::cout << "float = "; printFloat(str, Impossible, f);
		std::cout << "double = "; printDouble(str, Impossible,d);
	}
	catch (std::exception &e)
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: Impossible" << std::endl;
		std::cout << "double: Impossible" << std::endl;
	}
}
