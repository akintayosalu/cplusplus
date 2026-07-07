#include <string>
#include <iostream>

int main(){

    std::string name { "Alex" }; // initialize name with string literal "Alex"
    name = "John";  
    std::cout << "My name is: " << name << std::endl; // output: My name is: John
    return 0;
}
