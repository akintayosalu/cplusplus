#include <iostream>

int calculate(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "calculate(): Unhandled case\n";
        return 0;
    }
}

int getNumber(){
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

char getOp(){
    std::cout << "Enter an operation (+,-,*,/): ";
    char op{};
    std::cin >> op;
    return op;
}

int main(){
    int a {getNumber()};
    int b {getNumber()};
    char op {getOp()};
    std::cout << a << ' ' << op << ' ' << b << " = " << calculate(a, b, op) << "\n";
    return 0;
}
