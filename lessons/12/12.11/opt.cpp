#include <iostream>

void printIDNumber(const int* id=nullptr){
    if (id)
        std::cout << "Your ID number is " << *id << "\n";
    else
        std::cout << "Your ID number is not known.\n";
}

int main(){
    printIDNumber(); //we dont know the user ID yet

    int userId {};
    std::cin >> userId;
    printIDNumber(&userId);

    return 0;
}
