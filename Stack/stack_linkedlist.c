#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct stack{
    struct Node *top;
}stack;

struct stack *createStack(){
    struct stack *stk = (struct stack *)malloc(sizeof(struct stack));
    stk->top = NULL;
    return stk;
}

void push(struct stack *stk, int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if(!temp){
        printf("Heap/Stack Overflow\n");
        return;
    }
    temp->data = data;
    temp->next = stk->top;
    stk->top = temp;
}

int main(){
    struct stack *stk = createStack();
    for (int i = 0; i < 10; i++)
    {
        push(stk, i);
    }
    
    
    return 0;
}