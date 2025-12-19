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
        std::cout << "Dest called " << x << " " << "\n";
    }
};
void test_pass_by_val(test t)
{
}
int main()
{
    auto ptr = new test{1};
    delete ptr;
    std::cout << "\n";
    test temp{5};
    test_pass_by_val(temp);
}