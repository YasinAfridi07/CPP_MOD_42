
#include "ScalarConverter"

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &object)
{
    *this = object;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
    (void)rhs;
    return *this;
}

char toChar(const std::string str)
{
    return str.empty() ? '\0' : str[0];
}

