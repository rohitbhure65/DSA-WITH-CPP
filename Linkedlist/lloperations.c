#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node insertAtHead(struct node** head, int data){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = *head;
    *head = n;
};

void display(struct node* head){
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

}

int main()
{
    struct node *head = NULL;
    insertAtHead(&head, 45);
    display(head);
    insertAtHead(&head, 46);
    display(head);
    return 0;
};