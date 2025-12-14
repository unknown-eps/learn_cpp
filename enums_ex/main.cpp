#include <iostream>
#include <cassert>
enum class Color
{
    red,
    blue,
    green,
};
std::string_view getColorName(const Color temp)
{
    switch (temp)
    {
    case Color::red:
        return "red";
    case Color::green:
        return "green";
    case Color::blue:
        return "blue";
    default:
        return "??";
    }
}
std::ostream &operator<<(std::ostream &out, Color color)
{
    out << getColorName(color); // print our color's name to whatever output stream out
    return out;                 // operator<< conventionally returns its left operand

    // The above can be condensed to the following single line:
    // return out << getColorName(color)
}

int main()
{
    Color my_color{Color::green};
    std::cout << getColorName(my_color) << "\n";
}