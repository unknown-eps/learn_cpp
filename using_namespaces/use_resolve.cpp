#include <iostream>
void b1()
{
    std::cout << "main\n";
}
namespace foo
{
    void b1()
    {
        std::cout << "namespace\n";
    }
    void enter()
    {
        b1();
        ::b1();
    }
}
int main()
{
    foo::enter();
}