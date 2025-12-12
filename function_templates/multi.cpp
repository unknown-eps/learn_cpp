#include <iostream>

// write your mult function template here
// Allow multiplcation of any type with an int
template <typename T>
T mult(T x, int y)
{
    return static_cast<T>(x * y);
}
int main()
{
    std::cout << mult(2, 3) << '\n';
    std::cout << mult(1.2, 3) << '\n';

    return 0;
}