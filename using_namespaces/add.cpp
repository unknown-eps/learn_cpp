#include "add.h"
#include <iostream>
namespace my
{
    int add(int x, int y)
    {
        std::cout << "Adding x and y\n";
        return x+y;
    }
}