#include <iostream>
#include <string>

void printValue(std::string& y) // type changed to std::string&
{
    std::cout << y << '\n';
}

int main(){
    std::string x {"Hello, world!"};

    printValue(x);

    return 0;
}
