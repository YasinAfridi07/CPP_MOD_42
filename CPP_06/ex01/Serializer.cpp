
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

static uintptr_t serealize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

static Data *deserealize(uintptr_t raw)
{
    retrun(reinterpret_cast<Data *>(raw));
}
