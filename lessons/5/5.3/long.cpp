#include <iostream>

int main()
{
    int bin { 0b1011'0010 };  // assign binary 1011 0010 to the variable
    long value { 2'132'673'462 }; // much easier to read than 2132673462

    std::cout << "bin is " << bin << std::endl;
    std::cout << "value is " << value << std::endl;

    return 0;
}
