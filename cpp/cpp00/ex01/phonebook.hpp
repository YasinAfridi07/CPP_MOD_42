#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstdio>

class Contact
{
    public:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;
    std::string userinput;
        void    getfirstname()
        {
            std::cout<< "Enter First Name: ";
            std::cin >> firstname;
        }
        void    getLastname()
        {
            std::cout<< "Enter Last Name: ";
            std::cin >> lastname;
        }
        void    getphonenumber()
        {
            std::cout<< "Enter Phone Number: ";
            std::cin >> phonenumber;
        }
        void getdarkestsecert()
        {
            std::cout<< "Enter Darkest Secert: ";
            std::cin >> darkestsecret;
        }
        void getsearch()
        {
           //int i = 0;
            std::cout << "----------------------------------------------\n";
            std::cout << " | INDEX | FIRST-NAME | LAST-NAME | NICKNAME |"<<std::endl;
            std::cout << "----------------------------------------------\n";
           // std::cout << "|" << i + 1 << "|" << firstname <<"|"<< lastname << "|" <<nickname <<"|\n";i
        }
};

#endif