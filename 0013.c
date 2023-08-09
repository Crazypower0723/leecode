//
// Created by Dell on 2023/8/9.
//
#include "stdio.h"

//字符          数值
//I             1
//IV            4
//V             5
//IX            9
//X             10
//XL            40
//L             50
//XC            90
//C             100
//CD            400
//D             500
//CM            900
//M             1000


int romanToInt(char * s){
    int num = 0;
    char * p = s;
    while(*p != '\0'){
        if(*p == 'M'){
            num += 1000;
            p++;
            continue;
        }
        if(*p == 'C' && * (p + 1) == 'M'){
            num += 900;
            p +=2 ;
            continue;
        }
        if(*p == 'D'){
            num += 500;
            p++;
            continue;
        }
        if(*p == 'C' && *(p + 1) == 'D'){
            num += 400;
            p += 2;
            continue;
        }
        if(*p == 'C'){
            num += 100;
            p++;
            continue;
        }
        if(*p == 'X' && *(p + 1) == 'C'){
            num += 90;
            p += 2;
            continue;
        }
        if(*p == 'L'){
            num += 50;
            p++;
            continue;
        }
        if(*p == 'X' && *(p + 1) == 'L'){
            num += 40;
            p += 2;
            continue;
        }
        if(*p == 'X'){
            num += 10;
            p++;
            continue;
        }
        if(*p == 'I' && *(p + 1) == 'X'){
            num += 9;
            p += 2;
            continue;
        }
        if(*p == 'V'){
            num += 5;
            p++;
            continue;
        }
        if(*p == 'I' && *(p + 1) == 'V'){
            num += 4;
            p += 2;
            continue;
        }
        if(*p == 'I'){
            num += 1;
            p++;
            continue;
        }
    }
    return num;
}


int main(){
    char str[] = "MCMXCIV";
    int ret = romanToInt(str);
    printf("%d",ret);
    return 0;
}