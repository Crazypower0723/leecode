//
// Created by Dell on 2023/8/7.
//
#include "stdio.h"
#include "stdbool.h"


bool canConstruct(char * ransomNote, char * magazine){
    int * p[123] = {0};
    int * q[123] = {0};
    for(int i = 0;ransomNote[i] != 0;++i){
        p[ransomNote[i]]++;
    }
    for(int i = 0;magazine[i] != 0;++i){
        q[magazine[i]]++;
    }
    for(int i = 97;i < 123;++i){
        if(q[i] < p[i]){
           return false;
        }
    }
    return true;
}

int main(){
    char * p = "a";
    char * q = "b";
    int ret = canConstruct(p,q);
    printf("%d",ret);
    return 0;
}
