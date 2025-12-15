#include <iostream>

class Fraction
{
private:
    int m_numerator{0};
    int m_denominator{};

public:
    // Fraction() = default;
    Fraction(int numerator, int denominator)
        : m_numerator{numerator}, m_denominator{denominator}
    {
    }
    Fraction(int numerator)
        : m_numerator{numerator}
    {
    }
    void print() const
    {
        std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")\n";
    }
};
int main()
{
    Fraction temp(10);
    temp.print();
}