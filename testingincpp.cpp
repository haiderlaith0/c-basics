#include <iostream>
#include <random>

int main() {
    int userGuess;
    
    // Random number generation
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 99); // 0 to 99
    int randomNumber = distr(gen);

    std::cout << "Guess a number between 0 and 99 (Enter -1 to quit): ";

    while(true){
        std::cin >> userGuess;

        if(userGuess == -1){
            std::cout << "Got it. Quitting..." << std::endl;
            break;
        }

        if(userGuess < randomNumber){
            std::cout << "Too low! Try again: ";
        }else if(userGuess > randomNumber){
            std::cout << "Too high! Try again: ";
        }else{
            std::cout << "Great job! You guessed the number right!" << std::endl;
            break;
        }
    }
}
