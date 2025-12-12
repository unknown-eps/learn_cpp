#include <iostream>
void print_int(int x)
{
    std::cout << "Value of int is " << x << "\n";
}
void print_int(double) = delete;
int main()
{
    print_int(10);
    // print_int(10.4);
}