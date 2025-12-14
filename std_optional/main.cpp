#include <iostream>
#include <optional>
std::optional<int> func(const int x, const int y)
{
    if (y == 0)
    {
        return std::nullopt;
    }
    else
    {
        return x / y;
    }
}


int main()
{
    std::optional<int> res = func(1, 0);
    if (!res)
    {
        std::cout << "Y is 0\n";
    }
    else
    {
        int out = res.value();
        std::cout << "Result computed" << out << "\n";
    }
}