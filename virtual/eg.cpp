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
    Person p = static_cast<Person>(x);
    p.print();
}