#ifndef UUID_H
#define UUID_H

#include <iostream>
#include <stdlib.h>
#include <random>

namespace uuid
{
    class RandomHexGenerator
    {
    private:
        // Values to choose random from
        char values[62] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    public : 
        std::string generate();

    private:
        std::string _get_random_text();
    };

    std::string RandomHexGenerator::generate()
    {

        std::string random_text = _get_random_text();
        std::hash<std::string> hash_fn;

        char hex[100];

        return itoa(hash_fn(random_text), hex, 16); //converts decimal number to Hexadecimal number.
    }

    std::string RandomHexGenerator::_get_random_text()
    {
        std::string result{""};
        std::random_device rd;
        for (int i = 0; i < 4; i++)
        {
            result += values[rd() % 62];
        }
        return result;
    }
    
    class UUID 
    {
        public: 
            std::string generate();
    };

    std::string UUID::generate()
    {
        RandomHexGenerator random_generator;
        return random_generator.generate() + "-" + random_generator.generate() + "-" + random_generator.generate() + "-" + random_generator.generate() + "-" + random_generator.generate();
    }
};

#endif // UUID_H