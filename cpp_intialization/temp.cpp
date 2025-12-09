#include <iostream>
int func(int x)
{
    std::cout << x;
    return x;
}
int main()
{
    int x(10);//(Value initialization)
    int g{10}; //(Direct List Initialization)
    std::cout << "Hello";
}