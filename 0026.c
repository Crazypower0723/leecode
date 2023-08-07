//
// Created by Dell on 2023/8/6.
//
#include "stdio.h"

int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0) return 0;
    int i = 0;
    for(int j = 1;j < numsSize;++j){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main(){
    int nums[6] = {1,2,2,3,3,5};
    int k = removeDuplicates(nums, 6);
    printf("%d",k);
}