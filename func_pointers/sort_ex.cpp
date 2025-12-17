#include <vector>
#include <iostream>
void sort(std::vector<int> &arr, bool (*comp)(int, int))
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        int min_idx = i;
        for (std::size_t j = i + 1; j < arr.size(); j++)
        {
            if (comp(arr[j], arr[min_idx]))
            {
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
    }
}
bool sort1(int x, int y)
{
    return x < y;
}
bool sort2(int x, int y)
{
    return !sort1(x, y);
}
int main()
{
    std::vector<int> temp{3, 2, 1, 5, 4};
    auto ptr1 = sort1;
    auto ptr2 = sort2;
    sort(temp, ptr1);
    std::cout << "After 1st sort\n";
    for (auto x : temp)
        std::cout << x << " ";
    std::cout << std::endl;
    sort(temp, ptr2);
    std::cout << "After 2nd sort\n";
    for (auto x : temp)
        std::cout << x << " ";
    std::cout << std::endl;
}