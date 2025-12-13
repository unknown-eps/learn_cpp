#include <iostream>
#include <string>
/*
Just of illustration non const static types should not be retuned by reference.
*/
std::string &getProgramName()
{
    static std::string s{"Hello"};
    std::cout << s << "\n";
    return s;
}

int main()
{
    std::string &x = getProgramName(); // x is a mutable reference to s;
    x = "temp";
    getProgramName();
}