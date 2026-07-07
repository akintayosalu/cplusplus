#include <iostream>

int main(){
    int x {12};

    std::cout << x << '\n';
    std::cout << std::hex << x << '\n';
    std::cout << x << '\n';
    std::cout << std::oct << x << '\n'; // octal
    std::cout << std::dec << x << '\n'; // return to decimal
    std::cout << x << '\n'; // decimal

    return 0;
}
