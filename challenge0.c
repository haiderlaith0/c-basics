#include <stdio.h>

int main() {

char grade;
while (1){
printf("To exit the program, please type 1.\n");

printf("What's your grade? ");
scanf(" %c", &grade);



switch(grade){
case 'A':
printf("Perfect score!\n");
break;
case 'B':
printf("Your grade is %c\n", grade);
break;
case 'C':
printf("Your grade is %c\n", grade);
break;
case 'D':
printf("Your grade is %c\n", grade);
break;
case 'F':
printf("Your grade is %c, Failed\n", grade);
break;

default:
printf("ERROR: Invalid grade!\n");
}


if (grade == '1'){
    printf("Exitting program...\n");
    break;
}

}

    return 0;
}