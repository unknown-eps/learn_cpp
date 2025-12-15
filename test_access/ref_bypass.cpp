#include <iostream>
class test
{
private:
    int x;

public:
    test(int x)
    {
        this->x = x;
    }
    int &get()
    {
        return x;
    }
    void print()
    {
        std::cout << "Cur value is " << x << "\n";
    }
    void set(int val)
    {
        x = val;
    }
};
int main()
{
    test obj(0);
    obj.set(1);
    obj.print();
    int &ref = obj.get();
    ref = 100;
    obj.print();
}