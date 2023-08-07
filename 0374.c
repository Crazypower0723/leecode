//
// Created by Dell on 2023/8/7.
//
#include "stdio.h"


int guess(int num){
    int pick = 50;
    if(num > pick){
        return -1;
    }
    else if(num == pick){
        return 0;
    }
    else{
        return 1;
    }
}


int guessNumber(int n){
    int left = 1;
    int right = n;
    int num;
    while(left <= right){
        num = left + (right-left)/2;
        if(guess(num) == 0){return num;}
        else if(guess(num) > 0){
            left = num + 1;
        }
        else{
            right = num - 1;
        }
    }
    return -1;
}

int main(){
    printf("%d",guessNumber(500));
    return 0;
}

