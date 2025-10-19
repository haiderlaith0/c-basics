#include <stdio.h>
#include <string.h>

void happyBiosday(char name[], int age){

    

    printf("\nHAPPY BIOSDAY TO YOUUU!\n");
    printf("HAPPY BIOSDAY TO YOUUU!\n");
    printf("HAPPY BIOSDAY, MY %s!\n", name);
    printf("HAPPY BIOSDAY TO YOUUU!\n");
    if(age == 18){
        printf("\n... Hehe... You just turned 18~\n");
    }else{
        printf("\nYou are %d years old now!\n", age);
    }
}


int main(){

char name[50] = "\0";
int age = 0;

printf("\nWHAT'S YOUR NAME?! \n");
fgets(name, sizeof(name), stdin);
printf("HOW OLD ARE YOU?!! ");
scanf("%d", &age);
name[strlen(name) - 1] = '\0';

happyBiosday(name, age);





    return 0;
}