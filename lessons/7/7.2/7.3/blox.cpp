#include <iostream>

int main(){
    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger number: ";
    int larger{};
    std::cin >> larger;
    
    if (larger < smaller){
        int tmp {larger};
        larger = smaller;
        smaller = tmp;
    }

    std::cout << "The smaller value is " << smaller << std::endl;
    std::cout << "The larger value is " << larger << std::endl;
    return 0;

}
