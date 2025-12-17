#include <iostream>
class Cents
{
private:
    int val{0};

public:
    Cents(int cents)
        : val{cents}
    {
    }
    friend Cents operator+(const Cents &c1, const Cents &c2);
    void print_cents()
    {
        std::cout << "Obj has " << val << " cents \n";
    }
};
Cents operator+(const Cents &c1, const Cents &c2)
{
    return Cents{c1.val + c2.val};
}
int main()
{
    Cents o1{10};
    Cents o2{20};
    auto res = o1 + o2;
    res.print_cents();
}