#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int data;
    struct ListNode *link;
};

int main(){
    struct ListNode *head = NULL;
    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->data = 45;
    head->link = NULL;

    printf("%d\n",head->data);
    printf("%d\n",head->link);

    return 0;
}