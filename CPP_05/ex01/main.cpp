
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureaucrat_1("Person1", 3);
	std::cout << "----------------------1" << std::endl;
	std::cout << bureaucrat_1 << std::endl;
	std::cout << "----------------------2" << std::endl;

	Form form_1("Form_1", 500, 500);
	std::cout << "----------------------3" << std::endl;
	std::cout << form_1 << std::endl;
	std::cout << "----------------------4" << std::endl;

	try{
		Form form_2("Form_1", -1000,100);
	}
	catch(std::exception &e)
	{
		std::cerr <<e.what() << std::endl;
	}
	std::cout << "----------------------5" << std::endl;

}
