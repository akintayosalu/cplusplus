#include <iostream>

int doubleNumber (int num){
    return num * 2;
}

int main(){

    std::cout << "Enter a number ";
    int num {};
    std::cin >> num;

    int doubled { doubleNumber (num)};
    std::cout << "The doubled number is " << doubled << std::endl;
    return 0;
}
