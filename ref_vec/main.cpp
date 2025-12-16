#include <iostream>
#include <vector>
int main(int argc, char *argv[])
{
    int x = 1;
    std::vector<std::reference_wrapper<int>> temp{};
    temp.push_back(x);
    temp[0].get() = 5;
    std::cout << "x is " << x << "\n";
}