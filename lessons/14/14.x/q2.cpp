#include <iostream>

class Fraction
{
    private:
        int m_numerator{ 0 };
        int m_denominator{ 1 };
    public:
        explicit Fraction(int x=0, int y=0) : m_numerator{x}, m_denominator{y} {}
        void getFraction(){
            std::cout << "Enter a value for numerator: ";
            std::cin >> m_numerator;
            std::cout << "Enter a value for denominator: ";
            std::cin >> m_denominator;
            std::cout << '\n';
        }
        Fraction multiply(const Fraction& f) const
        {
            return Fraction{ m_numerator * f.m_numerator, m_denominator * f.m_denominator };
        }

        void printFraction() const
        {
            std::cout << m_numerator << '/' << m_denominator << '\n';
        }
};

int main()
{
    Fraction f1;
    Fraction f2;

    f1.getFraction();
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).printFraction();

    return 0;
}
