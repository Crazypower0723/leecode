//
// Created by Dell on 2023/7/24.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
//
//回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
//
//例如，121 是回文，而 123 不是。

//1     力扣提交版
bool isPalindrome(int x){
    char str1[16] = {0};
    char str2[16] = {0};
    if(x < 0){
        int cnt = 0;
        for (int i = 0; x ; ++i) {
            str1[i] = -(x % 10) + 48;
            x /= 10;
            cnt++;
        }
        str1[cnt] = '-';
        for (int i = 0; i <= cnt ; ++i) {
            str2[i] = str1[cnt - i];
        }
    }else{
        int cnt = 0;
        for (int i = 0; x ; ++i) {
            str1[i] = x % 10 + 48;
            x /= 10;
            cnt++;
        }
        for(int i = 0; i < cnt ;++i){
            str2[i] = str1[cnt - i - 1];
        }
    }
    if(strcmp(str1,str2)==0){
        return 1;
    }
    return 0;
}

//2     使用itoa函数精简版
//bool isPalindrome(int x){
//    char str[16] = {0};
//    char str1[16] = {0};
//    itoa(x,str,10);
//    for (int i = 0; i < strlen(str); ++i) {
//        str1[strlen(str)-i] = str[i];
//    }
//    if(strcmp(str,str1)==0){
//        return 1;
//    }
//    return 0;
//}

int main(){
    int x = 0;
    scanf("%d",&x);
    int ret = isPalindrome(x);
    printf("%d",ret);
    return 0;
}