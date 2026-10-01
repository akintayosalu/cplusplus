#include <iostream>

int main()
{
    int* ptr {}; // ptr is now a null pointer, and is not holding an address

    int x {5};
    ptr = &x;

    std::cout << *ptr << '\n';

    return 0;
}
