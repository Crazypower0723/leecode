//
// Created by Dell on 2023/7/25.
//
#include <stdio.h>
#include <stdlib.h>



struct ListNode {
      int val;
      struct ListNode *next;
};

int* getReturn(struct ListNode* head,int *arr,int i);

int* reversePrint(struct ListNode* head, int* returnSize){
    int i = 1;
    int* arr = (int*)malloc(4*i);
    return getReturn(head,arr,i);
}

int* getReturn(struct ListNode* head,int *arr,int i){
    int* arr1 = (int*) malloc(4*i);
    for(int j = 0;j < i - 1;++i){
        arr1[j] = arr[j];
    }
    arr1[i - 1] = head->val;                                                                         ;
    free(arr);
    arr = NULL;
    if(!head){
        return arr1;
    }
    return getReturn(head->next,arr1,i+1);
}

void outPut(struct ListNode* head){
    if(head){
        return;
    }
    while(head) {
        printf("%d", head->val);
        head = head->next;
    }
}

int main() {

    // 构造链表 1->2->3
    struct ListNode n1, n2, n3;
    int* arr = NULL;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printListReversed(&n1,arr);
    outPut(&n1);
    return 0;
}