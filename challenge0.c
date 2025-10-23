#include <stdio.h>

int main() {

int grade;
while (1){
printf("To exit the program, please type -1.\n");

printf("What's your grade? \n");
scanf("%d", &grade);

if (grade == -1){
    printf("Exitting program...\n");
    break;
}



if(grade == 100){
    printf("Perfect score! A+\n");
}

else if(grade >= 90){
printf("Excellent! A\n");
}
else if(grade >= 80){
printf("Good! B\n");
}
else if(grade >= 70){
printf("Average. C\n");
}
else if(grade >= 60){
printf("Below Average. D\n");
}
else if(grade >= 0){

    printf("Failed! F\n");
}else{
    printf("Invalid grade!\n");
}


}

    return 0;
}