#include <iostream>
template <typename T>
void print(T x)
{
    std::cout << "Using generic template\n";
}

void print(bool x)
{
    std::cout << "Bool\n";
}
int main()
{
    print(1);
    print(true);   // Prints bool
    print<>(true); // Now only matches again templates and automatically deduces template. Should not be used.
}