//
// Created by Dell on 2023/8/6.
//
#include "stdio.h"

int removeElement(int* nums, int numsSize, int val) {
  int slowIndex = 0;

  for (int fastIndex = 0; fastIndex < numsSize; fastIndex++) {
    if (nums[fastIndex] != val) {
      nums[slowIndex++] = nums[fastIndex];
    }
  }
  return slowIndex;
}

int main(){
    int arr[11] = {5,4,2,7,6,2,3,4,8,2,3};
    removeElement(arr,11,4);
    for (int i = 0;i < 9;++i){
        printf("  %d  ",arr[i]);
    }
    return 0;
}