#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int nums[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    srand(time(NULL) ^ getpid() ^ (uintptr_t)&nums);
    
    int minimum = 0;
    int maximum = sizeof(nums) / sizeof(nums[0]);
    int randomchoice;

    

    for(int i = 0; i < maximum; i++){
        randomchoice = (rand() % maximum) + minimum;
        printf("%d", nums[randomchoice]);
    }

    return 0;
}