#include <iostream>
int main()
{
    auto sum_func{
        [](int x, int y) -> int
        {
            return x + y;
        }};
    std::cout << "Sum of 5 and 3 is " << sum_func(5, 3) << "\n";
    return 0;
}