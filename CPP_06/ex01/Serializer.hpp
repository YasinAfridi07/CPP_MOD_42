
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef  struct
{
    char c;
    int i;
    float f;
    double d;
} data;
  
class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& object);
        Serializer &operator=(const Serializer &rhs);
    public:
        ~Serializer();

        static uintptr_t serealize(data *ptr);
        static data *deserealize(uintptr_t raw);

};

#endif
