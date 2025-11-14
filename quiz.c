#include <stdio.h>
#include <ctype.h>

int main(){

    const char questions[3][200] = {"What is the largest planet in the solar system?\n",
                              "What is the hottest planet in the solar system?\n",
                              "What's the closest planet to the sun?\n"};
    const char options[][96] = {"A. Mercury\n B. Venus\n C. Earth\n D. Mars\n E. Jupiter\n F. Saturn\n G. Uranus\n H. Neptune\n"};
    const char answers[] = {'E', 'B', 'A'};
    int score = 0;
    char guess = '\0';

    int generalPurposeSize = sizeof(questions) / sizeof(questions[0]);

    for(int i = 0; i < generalPurposeSize; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[0]);
        puts("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answers[i]){
            score+=1;
            puts("\nCorrect answer!\n");
        }else{
            printf("WRONG! The answer is %c\n", answers[i]);
        }
    }
    printf("Your score is: %d", score);


    return 0;
}