//
// Created by Dell on 2023/8/7.
//
#include "stdio.h"

int climbStairs(int n){
    if(n <= 2)return n;
    int p = 1;
    int q = 2;
    int sum = 0;
    for(int i = 0;i < n - 2;++i){
        sum = p + q;
        p = q;
        q = sum;
    }
    return sum;
}

int main(){
    int ret = climbStairs(6);
    printf("%d",ret);
    return 0;
}