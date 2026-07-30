#include <iostream>

void printInt(int x){
    std::cout << x << '\n';
}

void printInt(char) = delete;
void printInt(bool) = delete; // calls to this function will halt compilation

int main(){
    printInt(97);


    printInt('a');
    printInt(true);

    printInt(5.0);

    return 0;
}
