//
// Created by Dell on 2023/8/6.
//
#include <stdio.h>
#include <stdbool.h>


bool isPowerOfFour(int n){
    if(n <= 0){return false;}
    while(n%4 == 0){n /= 4;}
    return n == 1;
}

int main(){
    printf("%d",isPowerOfFour(16));
    return 0;
}
