#include <stdio.h>

int main() {

char grade;
printf("What's your grade? ");
scanf("%c", &grade);


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



    return 0;
}