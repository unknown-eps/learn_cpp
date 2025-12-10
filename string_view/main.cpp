#include <iostream>
#include <string_view>

int main()
{
    std::string_view a{"Hello"};
    std::string use_string;
    std::cin >> use_string;
    a = use_string;
    use_string[0] = '1';
    use_string += "ENd";
    std::cout << a;
}