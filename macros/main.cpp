#include <iostream>

#define PRINT_JOE
#define HELLO 0
int main()
{
#ifdef HELLO
    std::cout << "Hello\n";
#endif
#ifdef PRINT_JOE
    std::cout << "Joe\n"
              << "PRINT_JOE\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

    return 0;
}