#include <iostream>

enum class Animal{
    pig,
    chicken,
    goat, 
    cat, 
    dog,
    duck,
};

std::string_view getAnimalName(Animal animal){
    switch(animal){
        case Animal::pig: return "pig";
        case Animal::chicken: return "chicken";
        case Animal::goat: return "goat";
        case Animal::cat: return "cat";
        case Animal::dog: return "dog";
        case Animal::duck: return "duck";
        default: return "unknown";
    }
}

int printNumberOfLegs(Animal animal){
    switch(animal){
        case Animal::pig: return 4;
        case Animal::chicken: return 2;
        case Animal::goat: return 4;
        case Animal::cat: return 4;
        case Animal::dog: return 4;
        case Animal::duck: return 2;
        default: return -1; // unknown animal
    }
}
int main(){
    Animal a1 {Animal::cat};
    Animal a2 {Animal::chicken};

    std::cout << "A " << getAnimalName(a1) << " has " << printNumberOfLegs(a1) << " legs." << std::endl;
    std::cout << "A " << getAnimalName(a2) << " has " << printNumberOfLegs(a2) << " legs." << std::endl;
    
    return 0;
}
