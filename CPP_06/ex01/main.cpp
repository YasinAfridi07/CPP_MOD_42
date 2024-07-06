
#include "Serializer.hpp"


int main()
{
    Data *a = new Data();
    Data *b;
    uintptr_t raw;

    a->c = '0';
    a->i = 0;
    a->f = 4.20f;
    a->d = 42.42;

    std::cout << "data address: " << a << std::endl;
    std::cout << a->c << "\t" << a->i << "\t" << a->f << "\t" << a->d << std::endl;

    raw = Serializer::serealize(a);
    std::cout << "raw serialize: " << raw << std::endl;
    std::cout << "raw address: "<< &raw << std::endl;

    b = Serializer::deserealize(raw);
    std::cout << "deserealize address: " << b << std::endl;
    std::cout << b->c << "\t" << b->i << "\t" << b->f << "\t" << b->d << std::endl;

}
