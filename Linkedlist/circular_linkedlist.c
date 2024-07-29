#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the circular linked list
typedef struct node{
    int data;          // Data part of the node
    struct node *next; // Pointer to the next node
} Node;

// Function to insert a node at the end of a circular linked list
void insertAtEnd(Node **head, int data){
    Node *current = *head;
    // Allocate memory for the new node
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        // Check if memory allocation failed
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = data;

    // Traverse to the last node
    while (current->next != *head)
        current = current->next;
    newNode->next = newNode;
    // Check if the list is empty
    if (*head == NULL)
        // Initialize the list with the new node
        *head = newNode;
    else{
        // Insert the new node at the end
        newNode->next = *head;
        current->next = newNode;
    }
}

int main(){
    Node *head = NULL;
    insertAtEnd(&head, 2);

    return 0;
}
