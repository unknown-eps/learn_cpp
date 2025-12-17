#include <iostream>
#include <array>
#include <functional>
struct Student
{
    std::string s_name;
    int marks;
};
int main()
{
    std::array<Student, 8> arr{
        {{"Albert", 3},
         {"Ben", 5},
         {"Christine", 2},
         {"Dan", 8}, // Dan has the most points (8).
         {"Enchilada", 4},
         {"Francis", 1},
         {"Greg", 3},
         {"Hagrid", 5}}};
    auto compare_func{
        [](Student x, Student y) -> bool
        {
            return x.marks < y.marks;
        }};
    auto best_student = std::max_element(arr.begin(), arr.end(), compare_func);
    std::cout << "Best student is " << best_student->s_name;
    return 0;
}