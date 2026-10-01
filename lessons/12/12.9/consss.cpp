#include <iostream>

int main(){
    const int x{5};
    const int* ptr {&x};

    *ptr = 6;

    std::cout << "x = " << x << std::endl;
    std::cout << "*ptr = " << *ptr << std::endl;
    return 0;
}
