
#include "Serializer.hpp"
#include <iostream>


int main()
{
    data *a = new data();
    data *b;
    unitptr_t raw;

    a->c = '0';
    a->i = 0;
    a->f = 4.20f;
    a->d = 42.42;

    std::cout << "data address: " << a << std::endl;
    std::cout << a->c << "\t" << a->i << "\t" << a->f << "\t" <<a-> << std::endl;

    raw = Serializer::Serializer(a);
    std:cout << "raw serialize: " << raw << std::endl;
    std::cout << raw address: << &raw << std::endl;

    b = serialize::deserealize(raw);
    std::cout << "deserealize address: " << b << std::endl;
    std::cout << b->c << "\t" << b->i << "\t" << b->f << "\t" << b->d << std::end;
    
}