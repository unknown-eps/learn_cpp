#include <iostream>
#include "util.h"
int main()
{
    temp::print(); // Still works as the namespace in which print is defined is in an inline namespace in hello
}
