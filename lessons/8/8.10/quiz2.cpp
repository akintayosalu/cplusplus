#include <iostream>

int sumTo(int limit){
    int total{};
    for (int i{1}; i <= limit; ++i){
        total += i;
    }
    return total;

}

int main(){
    std::cout << sumTo(5) << std::endl;
    return 0;
}
