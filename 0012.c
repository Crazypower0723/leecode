//
// Created by Dell on 2023/8/9.
//
#include "stdio.h"
#include "string.h"
#include "malloc.h"

//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000

char * intToRoman(int num){
    char * p = (char *)malloc(44);
    memset(p,0,44);
    while(num){
        if(num >= 1000){
            strcat(p,"M");
            num -= 1000;
            continue;
        }
        if(num >= 900){
            strcat(p,"CM");
            num -= 900;
            continue;
        }
        if(num >= 500){
            strcat(p,"D");
            num -= 500;
            continue;
        }
        if(num >= 400){
            strcat(p,"CD");
            num -= 400;
            continue;
        }
        if(num >= 100){
            strcat(p,"C");
            num -= 100;
            continue;
        }
        if(num >= 90){
            strcat(p,"XC");
            num -= 90;
            continue;
        }
        if(num >= 50){
            strcat(p,"L");
            num -= 50;
            continue;
        }
        if(num >= 40){
            strcat(p,"XL");
            num -= 40;
            continue;
        }
        if(num >= 10){
            strcat(p,"X");
            num -= 10;
            continue;
        }
        if(num >= 9){
            strcat(p,"IX");
            num -= 9;
            continue;
        }
        if(num >= 5){
            strcat(p,"V");
            num -= 5;
            continue;
        }
        if(num >= 4){
            strcat(p,"IV");
            num -= 4;
            continue;
        }
        if(num >= 1){
            strcat(p,"I");
            num -= 1;
            continue;
        }
    }
    return p;
}


int main(){
    int * p = intToRoman(20);
    printf("%s",p);
    return 0;
}
