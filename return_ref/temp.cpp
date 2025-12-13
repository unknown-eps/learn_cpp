/*
Bad example just for illustration
*/
#include <iostream>
int &max(int &a, int &b)
{
    return (a > b) ? a : b;
}
int main()
{
    int x{10};
    int y{1};
    int &res{max(x, y)}; // Now res is a refernce to x
    res = -1;
    std::cout<<"New value of x is "<<x<<"\n";
}