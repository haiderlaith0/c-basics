#include <stdio.h>

int main (){

char conversion;
float weight;
double converted;

while(1){

printf("To convert from Kilograms to Pounds, please type A. To convert from Pounds to Kilograms, please tybe B\n");
scanf(" %c", &conversion);

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
printf("ERROR: Invalid conversion choice!");
}

}




    return 0;
}