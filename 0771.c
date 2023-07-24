//
// Created by Dell on 2023/7/24.
//

// 给你一个字符串 jewels 代表石头中宝石的类型，另有一个字符串 stones 代表你拥有的石头。 stones 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。
//
//字母区分大小写，因此 "a" 和 "A" 是不同类型的石头。
#include <stdio.h>

//1
int numJewelsInStones(char * jewels, char * stones){
    int cnt = 0;
    for(int i = 0;stones[i] != '\0';++i){
        for(int j = 0;jewels[j] != '\0';++j){
            if(stones[i] == jewels[j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    char * p ="acjidw";
    char * q ="LJBDHhdihafugaciabdashiu";
    int ret = numJewelsInStones1(p, q);
    printf("宝石数量为：%d",ret);
}