#include <iostream>
class Add
{
private:
    int x;

public:
    void set(int x)
    {
        this->x = x;
    }
    void print_res(Add const &p2)
    {
        std::cout << "Sum is " << x + p2.x << "\n";
    }
};
int main()
{
    Add x;
    Add y;
    x.set(3);
    y.set(5);
    x.print_res(y);
}