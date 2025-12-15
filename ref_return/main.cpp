#include <iostream>
const std::string &cmp(const std::string &s1, const std::string &s2)
{
    std::cout << "l \n";
    return s1 < s2 ? s1 : s2;
}
std::string cmp(const std::string &&s1, const std::string &&s2)
{
    std::cout << "r \n";
    return s1 < s2 ? s1 : s2;
}
int main()
{
    std::string a{"asda"};
    std::string b{"bcd"};
    cmp(a, b);
    cmp(std::string{"abc"}, std::string{"heelo"});
    return 0;
}