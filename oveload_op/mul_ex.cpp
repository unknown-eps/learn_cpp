#include <iostream>
class Fraction
{
private:
    int m_num{0};
    int m_den{1};

public:
    Fraction(int num, int den)
    {
        m_num = num;
        m_den = den;
    }
    friend Fraction operator*(const Fraction &f1, const Fraction &f2)
    {
        return Fraction{f1.m_num * f2.m_num, f1.m_den * f2.m_den};
    }
    friend Fraction operator*(const int x, const Fraction &f)
    {
        return Fraction{f.m_num * x, f.m_den};
    }
    friend Fraction operator*(const Fraction &f, const int x)
    {
        return x * f;
    }
    void print()
    {
        std::cout << m_num << "/" << m_den << std::endl;
    }
};
int main()
{
    Fraction f1{2, 5};
    f1.print();

    Fraction f2{3, 8};
    f2.print();

    Fraction f3{f1 * f2};
    f3.print();

    Fraction f4{f1 * 2};
    f4.print();

    Fraction f5{2 * f2};
    f5.print();

    Fraction f6{Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4}};
    f6.print();

    return 0;
}