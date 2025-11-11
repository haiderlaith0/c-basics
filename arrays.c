#include <stdio.h>

int main(){
    int nums[5] = {0};
    int size = sizeof(nums) / sizeof(nums[0]);

    

    for(int i = 0; i < size; i++){
        printf("Enter a score: ");
        scanf("%d", &nums[i]);
    }
    
    for(int i = 0; i < size; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}