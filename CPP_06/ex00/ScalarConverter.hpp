#ifndef SCALARCONVERTER
#define SCALARCONVERTER

# include <iostream>
# include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& object);
		ScalarConverter& operator=(const ScalarConverter& rhs);

	public:
		~ScalarConverter(void);

		static void	convert(std::string str); // why static?

		class ExceptionClass : public std::exception
		{
				virtual const char *what() const throw() { return "Non displayable";}
		};
};


#endif
