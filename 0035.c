//
// Created by Dell on 2023/8/8.
//
#include "stdio.h"


int searchInsert(int* nums, int numsSize, int target){
    if(nums == NULL) return -1;
    for (int i = 0; i < numsSize; ++i) {
        if(nums[i] >= target){
            return i;
        }
    }
    if(nums[numsSize - 1] < target){
        return numsSize;
    }
    return -1;
}

int main(){
    int nums[100] = {1,3,5,6};
    int ret = searchInsert(nums,4,5);
    printf("%d",ret);
    return 0;
}
