#ifndef UTIL_H
#define UTIL_H
#include <iostream>
class temp
{
public:
    int x;
    int y;
    void func();
};
class int_pair
{
public:
    int p1;
    int p2;
    bool is_equal()
    {
        if (p1 == p2)
        {
            std::cout << "Yes\n";
        }
        else
            std::cout << "False\n";
        return p1 == p2;
    }
    void sum()
    {
        std::cout << "Sum is " << p1 + p2 << "\n";
    }
};
#endif