#include <iostream>
class Ball
{
private:
    std::string color{"black"};
    double radius{10.0};

public:
    Ball(std::string_view s, double r)
        : color{s}, radius{r}
    {
        std::cout << "Ball(" << color << ", " << r << ")\n";
    }
    Ball(std::string_view s)
        : Ball{s, 10.0}
    {
    }
    Ball()
        : Ball("black", 10.0)
    {
    }
    Ball(double r)
        : Ball("black", r)
    {
    }
};
int main()
{
    Ball def{};
    Ball blue{"blue"};
    Ball twenty{20.0};
    Ball blueTwenty{"blue", 20.0};

    return 0;
}