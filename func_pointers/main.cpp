#include <iostream>

int foo(int x) // code starts at memory address 0x002717f0
{
    std::cout << "x has value " << x << std::endl;
    return x;
}

int main(int argc, char *argv[])
{
    int (*ptr)(int) = &foo;
    std::string user_input = argv[1];
    int user_val = std::stoi(user_input);
    (*ptr)(user_val);
}