#include <iostream>
class test
{
private:
    int x;

public:
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
    test obj;
    obj.set(0);
    obj.print();
    int &ref = obj.get();
    ref = 100;
    obj.print();
}