#include <iostream>

int main()
{
    char ch{97}; // 97 is ASCII code for 'a'
    std::cout << ch << '\n';
    std::cout << static_cast<int>(ch) << "\n";
    return 0;
}