#include <iostream>

int main (){
    std::cout << "Enter a single character: ";
    char chr{};
    std::cin >> chr;

    std::cout << "You entered " << chr << ", which has ASCII value " << static_cast<int>(chr) << ".\n";


    return 0;
}
