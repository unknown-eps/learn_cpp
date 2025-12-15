#include <iostream>
class Ball
{
private:
    std::string color;
    double radius;

public:
    Ball(std::string color, double radius)
        : color{color}, radius{radius}
    {
    }
    std::string_view get_color() const
    {
        return color;
    }
    double get_radius() const
    {
        return radius;
    }
};
void print(const Ball &obj)
{
    std::cout << "Ball" << "(" << obj.get_color() << ", " << obj.get_radius() << ")\n";
}
int main()
{
    Ball blue{"blue", 10.0};
    print(blue);

    Ball red{"red", 12.0};
    print(red);

    return 0;
}