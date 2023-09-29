#include "phonebook.hpp"



int main()
{
    while(true)
    {
        Contact add;

        std::cout << "\n       ENTER ONE OPTION      " <<std::endl;
        std::cout << "     ADD | SEARCH | EXIT\n" <<std::endl;

    std::cin >> add.userinput;
        if(add.userinput == "ADD")
        {
            add.getfirstname();
            add.getLastname();
            add.getphonenumber();
            add.getdarkestsecert();
            std::cout << "\nCONTACTS ADDED SUCCESSFULLY!" << std::endl;
        } 
        else if(add.userinput == "EXIT")
            break;
        else if (add.userinput == "SEARCH")
        {
            add.getsearch();
            std::cout << add.firstname;
        }
        else
        {
            std::cout << "Invalid option. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }   
    }
    return 0;
}