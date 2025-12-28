#include <iostream>
class Person
{
public:
    Person()
    {
        std::cout << "Person\n";
    }
};

class Man : public Person
{
public:
    Man()
    {
        std::cout << "Man\n";
    }
};
int main()
{
    Man x;
    return 0;
}