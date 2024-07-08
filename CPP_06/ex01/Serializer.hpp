
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

        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);

};

#endif
