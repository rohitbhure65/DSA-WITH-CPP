#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the circular linked list
typedef struct Node{
    int data;          // Data part of the node
    struct Node *next; // Pointer to the next node
} Node;

// Function to insert a node at the end of a circular linked list
struct Node *insertAtEnd(struct Node **head, int data){
    struct Node *current = *head;
    // Allocate memory for the new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode){
        // Check if memory allocation failed
        printf("Memory allocation failed\n");
        return *head;
    }
    newNode->data = data;
    newNode->next = newNode;
    // Check if the list is empty
    if (*head == NULL){
        // Initialize the list with the new node
        *head = newNode;
        newNode->next = *head;
    }else{
        // Traverse to the last node
        while(current->next != *head)
            current = current->next;
        // Insert the new node at the end
        newNode->next = *head;
        current->next = newNode;
        printf("Inserted a node at the tail with data: %d\n", data);
    }
}

// Function to insert a node at the beginning of a circular linked list
struct Node *inserAtBegin(struct Node **head, int data){
    struct Node *temp = *head;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory Error\n");
        return *head;
    }
    newNode->data = data;
    newNode->next = newNode;

    if(temp==NULL){
        // If the list is empty, initialize with the new node
        *head = newNode;
        newNode->next = *head;
        return *head;
    }
    // Traverse to the last node
    while(temp->next != *head){
        temp = temp->next;
    }
    // Insert the new node at the beginning
    newNode->next = *head;
    temp->next = newNode;
    *head = newNode;
    printf("Inserted a node at the Begin with data: %d\n", data);
}

// Function to delete a node at the end of a circular linked list
struct Node *deleteAtTail(struct Node **head){
    struct Node *temp = *head, *current = *head;
    if (*head==NULL) return *head;
    while (current->next != *head){
        temp = current;
        current = current->next;
    }
    // Remove the last node
    temp->next = current->next;
    free(current);
    printf("Deleted the Last node in Cicular Linked List\n");
}

// Function to delete a node at the beginning of a circular linked list
struct Node *deleteAtBegin(struct Node **head){
    struct Node *temp = *head, *current = *head;
    if(*head==NULL) return *head;
    while (current->next!=*head)
            current = current->next;
    // Remove the first node
    current->next = (*head)->next;
    *head = (*head)->next;
    free(temp);
    printf("Deleted the First node in Cicular Linked List\n");
}

// Function to count the number of nodes in a circular linked list
int count(struct Node *head){
    struct Node *curr = head;
    int count = 0;
    if(head==NULL) return 0;
    // Traverse and count the nodes
    do{
        curr = curr->next;
        count++;
    }while(curr!=head);
    return count;
}

// Function to display the nodes in a circular linked list
void display(struct Node *head){
    struct Node *current = head;
    if(head==NULL) return;
    // Traverse and print the data of each node
    do{
        printf("%d->", current->data);
        current = current->next;
    }while(current!=head);
    printf("NULL\n");
}

// Main function to test the circular linked list operations
int main(){
    struct Node *head = NULL;
    // Insert nodes at the end and beginning
    insertAtEnd(&head, 1);
    inserAtBegin(&head, 2);
    inserAtBegin(&head, 3);
    inserAtBegin(&head, 4);
    deleteAtBegin(&head);
    inserAtBegin(&head, 5);
    // Display the number of nodes
    printf("Elements present in Linked List : \n%d\n", count(head));
    // Delete a node at the end and display the list
    deleteAtTail(&head);
    display(head);

    return 0;
}