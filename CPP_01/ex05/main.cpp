

#include "Harl.hpp"

int main()
{
    Harl test;

    test.complain("warning");
    test.complain("info");
    test.complain("error");
    test.complain("debug");

    return (0);
}
