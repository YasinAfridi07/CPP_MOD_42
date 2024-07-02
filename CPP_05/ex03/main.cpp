
#include "Intern.hpp"

int main()
{
		{
		Intern someRandomIntern;
		Bureaucrat b("John", 1);
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		b.signAForm(*rrf);
		std::cout << rrf->getSigned() << std::endl;
		b.executeForm(*rrf);
		delete rrf;
	}
}
