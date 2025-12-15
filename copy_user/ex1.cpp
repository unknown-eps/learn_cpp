#include <iostream>
#include <cmath>
class Point2d
{
private:
    double x{0};
    double y{0};

public:
    Point2d() = default;
    Point2d(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void print()
    {
        std::cout << "Point( " << x << ", " << y << ")" << "\n";
    }
    
};
int main()
{
    Point2d first{};
    Point2d second{3.0, 4.0};

    first.print();
    second.print();

    return 0;
}