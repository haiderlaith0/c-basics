#include <stdio.h>


int main(){

int dayOfTheWeek = 0;


printf("What day is it in the week? \n");
scanf("%d", &dayOfTheWeek);

switch(dayOfTheWeek){
case 1:
printf("Today is Sunday.\n");
break;
case 2:
printf("Today is Monday.\n");
break;
case 3:
printf("Today is Tuesday.\n");
break;
case 4:
printf("Today is Wednesday.\n");
break;
case 5:
printf("Today is Thursday.\n");
break;
case 6:
printf("Today is Friday.\n");
break;
case 7:
printf("Today is Saturday.\n");
break;


default:
printf("Please enter a valid day, from 1 to 7\n");

}





    return 0;
}