
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdint.h>

typedef  struct
{
    char c;
    int i;
    float f;
    double d;
} Data;
  
class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& object);
        Serializer &operator=(const Serializer &rhs);
    public:
        ~Serializer();

        static uintptr_t serealize(Data *ptr);
        static Data *deserealize(uintptr_t raw);

};

#endif
