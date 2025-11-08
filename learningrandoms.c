#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //! printf("%d", rand());


    srand(time(NULL));

    int min = 1;
    int max = 100;
    int userGuess;

    int randNums = (rand() % (max - min + 1)) + min;

    printf("*** WELCOME TO THE NUMBER GUESSING GAME!\n");

    do{printf("Enter a random number: \n");
    scanf("%d", &userGuess);

    if(userGuess < randNums){
        printf("Too low!\n");
    }else if(userGuess > randNums){
        printf("Too high!\n");
    }else{
        printf("Correct!\n");
    }
    }while(userGuess != randNums);

    printf("The correct answer is: %d", randNums);

    return 0;

}