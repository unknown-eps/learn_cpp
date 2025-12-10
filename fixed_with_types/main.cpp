#include <iostream>

int main()
{

    int32_t y{12}; // Always assigns 32bits 4 bytes.
    std::cout << sizeof(y) << std::endl;
    return 0;
}