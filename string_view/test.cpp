#include <iostream>
#include <string_view>
std::string_view cmp(std::string_view s1, std::string_view s2)
{
    if (s1 < s2)
    {
        return s1;
    }
    return s2;
}
int main()
{
    std::string_view res = cmp("Hello", "World"); // Safe as string literals live forever.
    std::cout << res << "\n";
}