#include <iostream>
class Temp
{
private:
    int &x;

public:
    Temp(int &y)
        : x{y}
    {
    }

    void set(int val)
    {
        x = val;
    }
};
int main()
{
    int z = 0;
    Temp res(z);
    res.set(9);
    std::cout << "Updated z to " << z << "\n";
}