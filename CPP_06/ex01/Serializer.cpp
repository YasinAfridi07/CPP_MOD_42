
#include "Serializer.hpp"
#include <iostream>


Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &object)
{
    *this = object;
}

Serializer & Serializer::operator=(const Serializer & rhs)
{
    (void)rhs;
    return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serealize(Data *ptr)
{
   return (reinterpret_cast<uintptr_t>(ptr));
}
Data *Serializer::deserealize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}