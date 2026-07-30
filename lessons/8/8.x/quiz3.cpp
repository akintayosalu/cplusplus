#include <iostream>
#include "Random.h" 

int getGuess(int guessNumber){
    std::cout << "Guess #" << guessNumber << ": ";
    int guess{};
    std::cin >> guess;
    return guess;
}

void game(){
    int answer {Random::get(1, 100)};
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    for (int i = 1; i <= 7; i++){
        int guess{getGuess(i)};
        if (guess < answer){
            std::cout << "Your guess is too low.\n";
        }
        else if (guess > answer){
            std::cout << "Your guess is too high.\n";
        }
        else {
            std::cout << "Correct! You win!\n";
            return;
        }
    }
    std::cout << "You lost!" << "The answer is" << answer << '\n';
    return;
}

bool playAgain(){
    char play{};
    while (true){
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> play;
        if (play == 'n'){
            play = false;
            break;
        }
        else if (play == 'y'){
            play = true;
            break;
        }
        else{
            std::cout << "Invalid input. Please enter 'y' for yes or 'n' for no.\n";
        }
    }
    return play;
}

int main(){
    do{
        game();
    } while (playAgain());

    return 0;
}
