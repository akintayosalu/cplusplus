#include <iostream>

int getValueFromUser(){
    std::cout << "Enter a number: ";
    int num {};
    std::cin >> num;
    return num;
}

int main() {
    int num { getValueFromUser() };
    std::cout << num << " doubled is " << num * 2 << std::endl; 
    return 0;
}
