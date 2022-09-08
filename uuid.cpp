#if !defined(RMG_H)
#define RMG_H


#include "uuid.h"
#include <iostream>
#include "rng.cpp"

using namespace uuid;

std::string UUID::generate()
{
    RandomHexGenerator random_generator;
    return random_generator.generate() + "-" + random_generator.generate() + "-" + random_generator.generate() + "-" + random_generator.generate() + "-" + random_generator.generate();
}

#endif // RMG_H
