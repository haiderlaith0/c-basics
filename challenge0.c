#include <stdio.h>

int main() {

char grade;
while (1){
printf("To exit the program, please type -1.\n");

printf("What's your grade? ");
scanf("%c", &grade);
if (grade =-1){
    printf("Exitting program...\n");
    break;
}


switch(grade){
case 'A':
printf("Perfect score!");
break;
case 'B':
printf("Your grade is %c", grade);
break;
case 'C':
printf("Your grade is %c", grade);
break;
case 'D':
printf("Your grade is %c", grade);
break;
case 'F':
printf("Your grade is %c, Failed", grade);
break;

default:
printf("ERROR: Invalid grade!");
}



}

    return 0;
}