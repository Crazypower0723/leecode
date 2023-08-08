//
// Created by Dell on 2023/8/8.
//
#include "stdio.h"
#include "assert.h"
#define INT_MAX 2147483647
#define INT_MIN  -2147483648

// 加强版

//int myAtoi(char * s){
//    if(!s){return 0;}
//    int a = 0;
//    int max = INT_MAX / 10;
//    char * p = NULL;
//    char str[201] = {0};
//    p = s;
//    for(int i = 0;*p != '\0';++i){
//        if(*p == '-'){
//            str[0] = *p;
//        }
//        if(*p >= 48 && *p <= 57){
//            break;
//        }
//        p++;
//    }
//    if(str[0] == '\0'){
//        for(int i = 0;*p != '\0';++i){
//            if(*p >=48 && *p <= 57){
//                str[i] = *p;
//            }
//            p++;
//            if(*p < 48 || *p >57){
//                break;
//            }
//        }
//    }else{
//        for(int i = 0;*p != '\0';++i){
//            if(*p >=48 && *p <= 57){
//                str[i + 1] = *p;
//            }
//            p++;
//            if(*p < 48 || *p >57){
//                break;
//            }
//        }
//    }
//    if(str[0] == '-'){
//        for(int i = 1;str[i] != '\0';++i){
//            if(a > max || a == max && str[i] > 8){
//                return INT_MIN;
//            }
//            a = a * 10 + (str[i] - 48);
//        }
//        return -a;
//    }else{
//        for(int i = 0;str[i] != '\0';++i){
//            if(a > max || a == max && str[i] > 7){
//                return INT_MAX;
//            }
//            a = a * 10 + (str[i] - 48);
//        }
//        return a;
//    }
//    return 0;
//}

//leecode通过版

int myAtoi(char * s){
    if(!s){return 0;}
    int a = 0;
    int max = INT_MAX / 10;
    char * p = NULL;
    char str[201] = {0};
    p = s;
    for(int i = 0;*p != '\0';++i){
        if(*p == ' '){
            p++;
        }else{
            break;
        }
    }
    if(*p == '-'){
        str[0] = *p;
        p++;
    }
    else if(*p == '+'){
        p++;
    }
    if(str[0] == '\0'){
        for(int i = 0;*p != '\0';++i){
            if(*p >=48 && *p <= 57){
                str[i] = *p;
            }
            p++;
            if(*p < 48 || *p >57){
                break;
            }
        }
    }else{
        for(int i = 0;*p != '\0';++i){
            if(*p >=48 && *p <= 57){
                str[i + 1] = *p;
            }
            p++;
            if(*p < 48 || *p >57){
                break;
            }
        }
    }
    if(str[0] == '-'){
        for(int i = 1;str[i] != '\0';++i){
            if(a < -max || a == -max && (str[i] - 48) > 8){
                return INT_MIN;
            }
            a = a * 10 + (-(str[i] - 48));
        }
        return a;
    }else{
        for(int i = 0;str[i] != '\0';++i){
            if(a > max || a == max && (str[i] - 48) > 7){
                return INT_MAX;
            }
            a = a * 10 + (str[i] - 48);
        }
        return a;
    }
    return 0;
}

int main(){
    char str[100] = "-91283472332";
    int ret = myAtoi(str);
    printf("%d",ret);
    return 0;
}