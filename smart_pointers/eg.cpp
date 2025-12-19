#include <iostream>
class test
{
private:
    int x{0};

public:
    test(int x) : x{x}
    {
    }
    ~test()
    {
        std::cout << "Dest called" << "\n";
    }
};
int main()
{
    auto ptr = new test{1};
    delete ptr;
}