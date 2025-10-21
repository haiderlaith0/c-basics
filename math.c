#include <stdio.h>

int main(){

int nums = 0;

printf("Please enter a number: ");
scanf("%d", &nums);

if(nums % 2 == 0){
    printf("The number is even.");
}else{
    printf("The number is odd.");
}
    return 0;
}