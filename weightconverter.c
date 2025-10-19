#include <stdio.h>

int main (){

char conversion;
float weight;
double converted;

while(1){

    printf("\nTo exit the program, please type in 1, 0 or q\n");

printf("To convert from Kilograms to Pounds, please type A. To convert from Pounds to Kilograms, please type B\n");
scanf(" %c", &conversion);

    if (conversion == '1' || conversion == '0' || conversion == 'q') {
        printf("\nGot it, exiting...\n");
        break;
    }

switch(conversion){
case 'A':
printf("How much is the weight in Kilograms? \n");
scanf("%f", &weight);
converted = weight * 2.20462;
printf("The weight in pounds is %.2lf\n", converted);
break;
case 'B':
printf("How much is the weight in Pounds?\n");
scanf("%f", &weight);
converted = weight / 2.20462;
printf("The weight in pounds is %.2lf\n", converted);
break;

default:
printf("\nERROR: Invalid conversion choice!\n");
}

}




    return 0;
}