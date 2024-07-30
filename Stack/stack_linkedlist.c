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

int isEmpty(struct stack *stk){
    return stk->top == NULL;
}

int size(struct stack *stk){
    int count = 0;
    struct Node *temp;
    if (isEmpty(stk)){
        return 0;
    }
    temp = stk->top;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

int pop(struct stack *stk){
    int data;
    struct Node *temp;
    if (isEmpty(stk)){
        return INT_MIN;
    }
    temp = stk->top;
    stk->top = stk->top->next;
    data = temp->data;
    free(temp);
    return data;
}

int peek(struct stack *stk){
    if (isEmpty(stk)){
        return INT_MIN;
    }
    return stk->top->data;
}

void deleteStack(struct stack *stk){
    struct Node *temp, *p;
    p = stk->top;
    while(p){
        temp = p->next;
        p = p->next;
        free(temp);
    }
    free(stk);
}

int main(){
    struct stack *stk = createStack();
    for (int i = 0; i < 10; i++){
        push(stk, i);
    }
    printf("Top element is %d\n", peek(stk));
    printf("Stack size is %d\n", size(stk));

    for (int i = 0; i < 10; i++){
        printf("Pop element is %d\n", pop(stk));
    }

    if (isEmpty(stk))
        printf("Stack is empty\n");
    else 
        printf("Stack is Not empty\n");
    deleteStack(stk);

    return 0;
}