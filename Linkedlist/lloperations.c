#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Insert a Node at the Begging of Linked List
struct node* insertAtHead(struct node **head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Insert a Node at The Tail of the Linked List
struct node* insertAtEnd(struct node **head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *cur = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (cur == NULL) {
        *head = newNode;
    } else {
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = newNode;
    }
}
       
// Insert a Node at the Given index On the Linked List
struct node* inserAtindex(struct node **head,int data, int index){
  if (index == 0) {
        insertAtHead(head, data);
    } else {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;

        struct node *cur = *head;
        for (int i = 0; i < index - 1 && cur != NULL; i++) {
            cur = cur->next;
        }

        if (cur == NULL) {
            // Index is greater than the length of the list, insert at end
            insertAtEnd(head, data);
        } else {
            newNode->next = cur->next;
            cur->next = newNode;
        }
    }
}

// Traversing of the Linked List
void display(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;

    insertAtHead(&head, 1);
    display(head);

    insertAtEnd(&head, 2);
    display(head);

    insertAtEnd(&head, 3);
    display(head);

    inserAtindex(&head,4,5);
    display(head);
    return 0;
}
