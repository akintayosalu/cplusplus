#include <iostream>

int main() {
    // An integer can only hold non-fractional values.
    // Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
    // Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

    // int w1 {4.5}; // Error: narrowing conversion from double to int

    // int w2 = 4.5; // compiles: w2 copy-initialized to value 4
    // int w3 (4.5); // compiles: w3 direct-initialized to value 4
    
    // return 0;

    [[maybe_unused]] double pi {3.14159}; // pi is a double variable initialized to 3.14159
    [[maybe_unused]] double gravity {9.8}; // gravity is a double variable initialized to 9.8
    [[maybe_unused]] double speed_of_light {299792458}; // speed_of_light is a double variable initialized to 299792458

    std::cout << "pi: " << pi << std::endl;
    return 0;
}
