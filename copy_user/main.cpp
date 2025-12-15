#include <iostream>
class Int
{
private:
    int x{0};

public:
    Int(int val)
        : x{val}
    {
        std::cout << "In constructor\n";
    }
    int get() const
    {
        return x;
    }
};
void print(const Int &integer)
{
    std::cout << "Integer class has value " << integer.get() << "\n";
}
int main()
{
    print(10);
}