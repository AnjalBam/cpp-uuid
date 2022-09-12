# UUID library for C++

This is a UUID library for implemented in C++ and can be used by downloading this repository and copy `uuid.h` file to your project and include it in your project like

```cpp
#include "uuid.h"
```

### Usage
You can use this library to generate uuid libraries as follows.
```cpp
// main.cpp
#include <iostream>
#include "uuid.h" // Path to the library

using namespace std;

int main()
{
    uuid::UUID uuid1;
    cout << uuid1.generate();
    return (0);
}
```

## API Reference 
- `RandomHexGenerator` -> Class
  - Method: `string generate()` -> Usage:
    - Generates a random hex of length 5
    ```cpp
    int main() 
    {
        uuid::RandomHexGenerator random_generator;
        std::cout << random_generator.generate()
    }
    ```

- `UUID` -> Class
  - Method: `string generate()` -> Usage:
    - Generate a random UUID
    ```cpp
    int main() 
    {
        uuid::UUID uuid;
        std::cout << uuid.generate();
    }
    ```