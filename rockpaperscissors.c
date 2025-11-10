#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Function prototypes
int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main(){
    // Seed random number generator with current time for varied computer choices
    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS!\n");

    // Get player input and generate computer's random choice
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    // Display the user's choice (1=Rock, 2=Paper, 3=Scissors)
    switch(userChoice){
        case 1:
        printf("You chose Rock!\n");
        break;
        case 2:
        printf("You chose Paper!\n");
        break;
        case 3:
        printf("You chose Scissors!\n");
        break;

        default:
        printf("ERROR: INVALID CHOICE! TRY AGAIN\n");
        break;
    }

    // Display the computer's randomly selected choice
    switch(computerChoice){
        case 1:
        printf("Computer chose Rock!\n");
        break;
        case 2:
        printf("Computer chose Paper!\n");
        break;
        case 3:
        printf("Computer chose Scissors!\n");
        break;
    }

    // Compare choices and announce the winner
    checkWinner(userChoice, computerChoice);

    return 0;
}

// Generates a random choice for the computer (1=Rock, 2=Paper, 3=Scissors)
int getComputerChoice(){
    return (rand() % 3) + 1;
}

// Prompts the user to enter a valid choice and validates input
// Returns: 1 for Rock, 2 for Paper, 3 for Scissors
int getUserChoice(){
    int choice = 0;

    // Keep asking until user enters a valid choice between 1-3
    do{
        printf("Please choose Rock, Paper or Scissors: (1. Rock - 2. Paper - 3. Scissors) \n");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

    return choice;
}

// Determines the winner by comparing user and computer choices
// Rock beats Scissors, Scissors beats Paper, Paper beats Rock
void checkWinner(int userChoice, int computerChoice){
    // Check for a tie (both chose the same option)
    if(userChoice == computerChoice){
        printf("It's a TIE!\n");
    }
    // Check all winning conditions for the user
    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2)){
        printf("YOU WIN!\n");
    }
    // If user didn't win or tie, the computer must have won
    else{
        printf("COMPUTER WINS!\n");
    }
}