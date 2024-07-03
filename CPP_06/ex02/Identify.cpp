
#include "Identify.hpp"

Base	*generate(void)
{
    srand(time(NULL));
    int num = rand() % 3;

    if(num == 0)
        return new AClass();
    else if (num == 1)
        return new BClass();
    else 
    {
        return new CClass();
    }
}


void identify(Base *p)
{
    if(dynamic_cast<AClass*>(p))
        std::cout << "A Class" << std::endl;
    else if (dynamic_cast<BClass*>(p))
        std::cout << "B Class" << std::endl;
    else if (dynamic_cast<CClass*>(p))
        std::cout <<"C Class" << std::endl;
}

void identify(Base &p)
{
    try
	{
		AClass &a = dynamic_cast<AClass&>(p);
		(void)a;
		std::cout <<  "A Class" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			BClass &b = dynamic_cast<BClass&>(p);
			(void)b;
			std::cout << "B Class" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				CClass &c = dynamic_cast<CClass&>(p);
				(void)c;
				std::cout << "C Class" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Not A, B or C" << std::endl;
			}
		}
	}
}