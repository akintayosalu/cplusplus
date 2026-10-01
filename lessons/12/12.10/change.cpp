#include <iostream>

void changeValue(int* ptr)
{
    *ptr = 6;
}

int main()
{
    int x{ 5 };

    std::cout << "x = " << x << std::endl;

    changeValue(&x);

    std::cout << "x = " << x << std::endl;

    return 0;
}
