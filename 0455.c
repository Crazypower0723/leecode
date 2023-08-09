//
// Created by Dell on 2023/8/9.
//

#include "stdio.h"

// 快排 + 双指针遍历

//1 通过

//int tmp(const void * p,const void * q){
//    return (*(int*)p - *(int*)q);//升序排列
//}

//int findContentChildren(int* g, int gSize, int* s, int sSize){
//    int num = 0;//已满足的孩子数量
//    int arr1[30000] = {0};//存储胃口值
//    int arr2[30000] = {0};//存储饼干尺寸
//    int *p = arr1;//用来遍历arr1
//    int *q = arr2;//用来遍历arr2
//    for(int i = 0;i < gSize;++i){//将g的数据拷贝到arr1
//        arr1[i] = *g;
//        g++;
//    }
//    for(int i = 0;i < sSize;++i){//将s的数据拷贝到arr2
//        arr2[i] = *s;
//        s++;
//    }
//    qsort(arr1,gSize,sizeof(int),tmp);//升序排列两个数组元素
//    qsort(arr2,sSize,sizeof(int),tmp);
//    while(p - arr1 < gSize && q - arr2 < sSize){//循环寻找可以满足的孩子数量
//        if(*q >= *p){//可以满足
//            num++;//以满足孩子数+1
//            p++;//指针向后走一位，看下一个孩子是否可以满足
//        }
//        q++;//指针一直往后走，可以满足孩子的饼干分配给孩子，不满足的丢弃
//    }
//    return num;
//}


// 2  优化

int tmp(const void * p,const void * q){
    return (*(int*)p - *(int*)q);
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    int num = 0;//记录可以满足孩子数量
    qsort(g,gSize,sizeof(int),tmp);//对g和s升序排列
    qsort(s,sSize,sizeof(int),tmp);

    int * p = g;//用来遍历g
    int * q = s;//用来遍历s
    while(p - g < gSize && q - s < sSize){//循环寻找可满足孩子
        if(*q >= *p){//可以满足
            num++;//以满足孩子数+1
            p++;//到下一个孩子
        }
        q++;//下一个饼干，可以满足的分配给孩子，不可以满足的丢弃
    }
    return num;//返回已满足孩子数
}

int  main(){
    int g[] = {10,9,8,7};
    int s[] = {5,6,7,8};
    int ret = findContentChildren(g,4,s,4);
    printf("%d",ret);
    return 0;
}

