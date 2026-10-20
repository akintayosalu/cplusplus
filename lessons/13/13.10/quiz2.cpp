#include <iostream>

struct Fraction {
    int num {};
    int den {};
};

Fraction getFraction(){
    Fraction f {};
    std::cout << "Enter a value for the numerator: ";
    std::cin >> f.num;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> f.den;
    return f;
}

void multiply(const Fraction& f1, const Fraction& f2){
    std::cout << "Your fractions multiplied together: ";
    std::cout << f1.num*f2.num << "/" << f1.den*f2.den << std::endl;
    return;
}

int main(){
    Fraction f1 {getFraction()};
    Fraction f2 {getFraction()};
    multiply(f1, f2);
    return 0;
}
