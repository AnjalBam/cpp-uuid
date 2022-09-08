#ifndef UUID_H
#define UUID_H

#include <iostream>
#include <stdlib.h>

namespace uuid
{
    class UUID 
    {
        public: 
            std::string generate();
    };
};

#endif // UUID_H