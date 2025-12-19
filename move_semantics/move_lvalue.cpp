#include <iostream>
#include <string>
#include <utility> // for std::move
class Int_store
{
public:
    int m_x{0};
    Int_store(int x) : m_x{x}
    {
    }
    Int_store(const Int_store &temp) : m_x{temp.m_x}
    {
        std::cout << "Copy constructor\n";
    }
    Int_store(Int_store &&temp)
        : m_x{temp.m_x}
    {
        std::cout << "Move constructor \n";
    }
    Int_store &operator=(const Int_store &temp)
    {
        m_x = temp.m_x;
        std::cout << "Copy assign\n";
        return *this;
    }
    Int_store &operator=(Int_store &&temp)
    {
        m_x = temp.m_x;
        temp.m_x = -1;
        std::cout << "Move assign\n";
        return *this;
    }
};
int main()
{

    Int_store x{1};
    Int_store y{2};
    y = x;
    /*
    Prints coppy assign
    */
    Int_store a{1};
    Int_store b{5};
    a = static_cast<Int_store &&>(b);
    /*
    prints move assign
     */
    Int_store c{1};
    Int_store d{5};
    c = std::move(d);
    /*
    prints move assign
     */
    Int_store e{1};
    Int_store f{2};
    Int_store &temp{f};
    e = std::move(temp);
    std::cout << "f has value " << f.m_x << "\n";
    return 0;
}