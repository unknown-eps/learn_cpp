#include <iostream>
class Base
{
public:
    void print()
    {
        std::cout << "Base normal\n";
    }
    virtual void print_vir()
    {
        std::cout << "Base vir\n";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        std::cout << "Derived normal\n";
    }
    virtual void print_vir() override
    {
        std::cout << "Derived vir\n";
    }
};
int main()
{
    Derived x;
    Base &ref{x};
    ref.print();     // Prints Base normal
    ref.print_vir(); // Print Derived vir
}