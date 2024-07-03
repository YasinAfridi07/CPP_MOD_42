#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <cstdlib>
#include <iostream>
#include <ctime>

#include "AClass.hpp"
#include "BClass.hpp"
#include "CClass.hpp"

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif