



#include "Harl.hpp"

int main(int ac, char **av)
{
    if(ac == 2) 
    {
        Harl test;

        test.complain(av[1]);
    }
    else 
        std::cout << "ERROR!!!!" << std::endl;
    return (0);
}