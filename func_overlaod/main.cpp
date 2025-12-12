#include <iostream>
namespace oveload
{
    void print()
    {
        std::cout << "Print called\n";
    }
    void print(int x)
    {
        std::cout << "Int\n";
    }
}

int main()
{
    oveload::print();
    oveload::print(2);
}