#include <iostream>

float getUserValue(){
    std::cout << "Enter a double value:";
    float x{};
    std::cin >> x;
    return x;
}

char getUserOperation (){
    std::cout << "Enter an operation (+, -, *, /):";
    char op{};
    std::cin >> op;
    return op;
}

void handleOperation (float x, float y, char op) {
    double result{};
    switch (op) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y != 0) {
                result = x / y;
            } else {
                return;
            }
            break;
        default:
            return;
    }

    std::cout << x << " " << op << " " << y << " = " << result << std::endl;
}

int main (){
    float x {getUserValue()};
    float y {getUserValue()};
    char op {getUserOperation()};
    handleOperation(x, y, op);

    return 0;
}
