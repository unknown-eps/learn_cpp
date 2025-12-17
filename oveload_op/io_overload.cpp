#include <iostream>
class Point
{
private:
    int x{0};
    int y{0};
    int z{0};

public:
    Point(int c_x, int c_y, int c_z)
        : x{c_x}, y{c_y}, z{c_z} {}
    friend std::ostream &operator<<(std::ostream &out, const Point &point);
};
std::ostream &operator<<(std::ostream &out, const Point &point)
{
    std::cout << "( " << point.x << ", " << point.y << ", " << point.z << " ) ";
    return out;
}
int main()
{
    Point p{1, 2, 3};
    std::cout << "Point is" << p << " located here\n";
}