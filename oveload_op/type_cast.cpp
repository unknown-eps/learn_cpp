#include <iostream>
class Int_Store
{
private:
    int m_store{};

public:
    Int_Store(int store)
        : m_store{store}
    {
    }
    void print()
    {
        std::cout << "Int store has value " << m_store << " \n";
    }
};
class Double_Store
{
private:
    double m_dstore{};

public:
    Double_Store(double store)
        : m_dstore{store}
    {
    }
    operator Int_Store() const
    {
        return Int_Store(static_cast<int>(m_dstore));
    }
};
int main(int argc, char *argv[])
{
    Double_Store d{5.57};
    auto x = static_cast<Int_Store>(d);
    x.print();
}