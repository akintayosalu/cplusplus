#include <iostream>

float getHeight(){
    std::cout << "Enter the height of the tower in meters: ";
    float x{};
    std::cin >> x;
    return x;
}

void displayCurrentHeight(float height) {
    for (int i = 0; i < 6; i++) {
        float currentHeight { height - (9.8f * (i * i) / 2 )};
        if (currentHeight < 0){
            std::cout << "At " << i << " seconds, the ball has hit the ground." << std::endl;
            break;
        }
        std::cout << "At " << i << " seconds, the ball is at height: " << currentHeight << " meters" << std::endl;
    }

}

int main (){
    float height {getHeight()};
    displayCurrentHeight(height);
    return 0;
}
