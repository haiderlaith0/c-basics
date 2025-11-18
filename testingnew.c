#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char userInput[20];
    printf("Say either cat or dog: ");

    while(1){

    fgets(userInput, sizeof(userInput), stdin);
    userInput[strlen(userInput) - 1] = '\0';

    for (int i = 0; userInput[i] != '\0'; i++) {
        userInput[i] = toupper(userInput[i]);
    }


    if(strcmp(userInput, "CAT") == 0){
        printf("MEOW!~");
        break;
    }else if(strcmp(userInput, "DOG") == 0){
        printf("WOOF!");
        break;
    }else{
        printf("ERROR: YOU MUST EITHER ENTER 'cat' OR 'dog'!");
    }


}
    
    return 0;
}