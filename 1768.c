//
// Created by Dell on 2023/7/11.
//

#include <stdio.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    int lenth1 = strlen(word1);
    int lenth2 = strlen(word2);
    char * merge = (char *)malloc(lenth1 + lenth2 + 1);
    if(lenth1 > lenth2){
        for(int i = 0;i < lenth2;++i){
            merge[2 * i] = word1[i];
            merge[2 * i + 1] = word2[i];
        }
        for(int i = lenth2;i < lenth1;++i){
            merge[lenth2 + i] = word1[i];
        }
        merge[lenth1+lenth2 ] = 0;
    }
    else if(lenth1 < lenth2){
        for(int i = 0;i < lenth1;++i){
            merge[2 * i] = word1[i];
            merge[2 * i + 1] = word2[i];
        }
        for(int i = lenth1;i < lenth2;++i){
            merge[ lenth1 + i] = word2[i];
        }
        merge[lenth1+lenth2]=0;
    }
    else{
        for(int i = 0;i < lenth1;++i){
            merge[2 * i] = word1[i];
            merge[2 * i + 1] = word2[i];
        }
        merge[lenth1+lenth2]=0;
    }
    return merge;
}


int main(){
    char * a ={"ab"};
    char * b = "pqrs";
    char *p = mergeAlternately(a, b);
    printf("%s",p);
}