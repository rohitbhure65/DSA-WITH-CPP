#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Insertion Operations
// Insert a Node at the Begging of Linked List
struct node* insertAtHead(struct node **head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
    // Modification Persistence:
    // When we pass head as a single pointer (i.e., struct node *head), we are passing a copy of the head pointer. Any changes made to this copy will not affect the original head pointer in the calling function.
    // By passing head as a pointer to a pointer (i.e., struct node **head), we pass the address of the head pointer. This allows the function to modify the original head pointer itself, not just a copy of it.
    printf("Insert a Node at the Begging of Linked List\n");
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
    printf("Insert a Node at The Tail of the Linked List\n");
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
    printf("Insert a Node at the Given index On the Linked List\n");
}

// Deletion Operations
// Deleting The first Node in Singly Linked List
void *deletefirst(struct node **head){
    struct node *temp;
    if(*head==NULL)
        return *head;
    temp = *head;
    *head = (*head)->next;
    free(temp);
    
    printf("Deleting The first Node in Singly Linked List\n");
};

// Deleting the last Node in Singly Linked List
void *deletelast(struct node **head){
    struct node *temp=NULL, *curr=*head;
    if(*head==NULL){
        return *head;
    }
    while (curr->next)
    {
        temp=curr;
        curr=curr->next;
    }
    temp->next=NULL;
    free(curr);
    
    printf("Deleting the last Node in Singly Linked List\n");
} 

// Traversing of the Linked List
struct node* display(struct node *head) {
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

    deletefirst(&head);
    display(head);

    deletelast(&head);
    display(head);
    return 0;
}
