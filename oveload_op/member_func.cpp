#include <iostream>
class Cents
{
private:
    int val{0};

public:
    Cents(int val)
        : val{val}
    {
    }
    Cents operator+(const Cents &c2)
    {
        return Cents{this->val + c2.val};
    }
    int &print()
    {
        return val;
    }
};
int main()
{
    Cents c1{10};
    Cents c2{5};
    auto res = c1 + c2;
    std::cout << "Total cents " << res.print() << " \n";
}