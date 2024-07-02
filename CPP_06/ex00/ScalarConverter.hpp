

#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <iostream>

class ScalarConverter
{
    private:

    public:
        ScalarConverter();
        ~ScalarConverter();

        void    convert(std::string str);
        
        class ExceptionClass : public std::exception
        {
            virtual const char *what() const throw() { return "Non displayable";}
        };

};


#endif
