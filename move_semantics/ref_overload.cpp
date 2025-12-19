#include <iostream>
void ref(int &x)
{
    std::cout << "lvalue\n";
}
void ref(int &&x)
{
    std::cout << "rvalue\n";
}
int main()
{
    ref(5);
    int temp{5};
    ref(temp);
    int &lval_ref{temp};
    ref(lval_ref);
    int &&rval_ref{10};
    ref(rval_ref);
}