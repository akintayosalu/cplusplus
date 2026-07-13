#include <iostream>

int userInt(){
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    return num;
}

constexpr bool isEven(int num){
    return (num % 2) == 0;
}

int main(){
    int userNumber {userInt()};

    if (isEven(userNumber)){
        std::cout << userNumber << " is even" << std::endl;
    }
    else {
        std::cout << userNumber << " is odd" << std::endl;
    }
    

    return 0;
}
