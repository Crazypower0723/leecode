//
// Created by Dell on 2023/7/25.
//
#include <stdio.h>
#include <assert.h>


//给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。

//Definition for singly-linked list.
typedef struct ListNode {
     int val;
     struct ListNode *next;
 }NODE;

struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head){
        struct ListNode* p = head;
        while(p->next){
            struct ListNode* q = NULL;
            if(p->val == p->next->val){
                q = p->next->next;
                p->next = q;
            }
            else{
                p = p->next;
            }
        }
    }else{
    }
    return head;
}

void output(NODE *head){
    assert(head);
    NODE *p = head;
    while (p = p->next) {
    printf("%d",p->val);
    }
    printf("\n");
}

int main(){
    NODE* a = {0};
    NODE* b = {0};
    NODE* c = {0};
    NODE* d = {0};
    a->val = 1;
    a->next = b;
    b->val = 2;
    b->next = c;
    c->val = 3;
    c->next = d;
    d->val = 4;
    deleteDuplicates(a);
    output(a);
    return 0;
}
