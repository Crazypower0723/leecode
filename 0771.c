//
// Created by Dell on 2023/7/24.
//

// ����һ���ַ��� jewels ����ʯͷ�б�ʯ�����ͣ�����һ���ַ��� stones ������ӵ�е�ʯͷ�� stones ��ÿ���ַ�������һ����ӵ�е�ʯͷ�����ͣ�����֪����ӵ�е�ʯͷ���ж����Ǳ�ʯ��
//
//��ĸ���ִ�Сд����� "a" �� "A" �ǲ�ͬ���͵�ʯͷ��
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
    printf("��ʯ����Ϊ��%d",ret);
}