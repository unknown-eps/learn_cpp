#include <iostream>
class Person
{
public:
    void print()
    {
        std::cout << "Print Person\n";
    }
};

class Man : public Person
{
public:
    void print()
    {
        std::cout << "Print Man\n";
    }
};
int main()
{
    Man x;
    x.print();
    x.Person::print();
    return 0;
}