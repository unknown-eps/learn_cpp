#include <iostream>
#include <string_view>
std::string name()
{
    std::string x;
    std::cin >> x;
    return x;
}
int main()
{
    std::string_view res{name()}; // Undefined behavious
    std::cout << res << "\n";
    return 0;
}