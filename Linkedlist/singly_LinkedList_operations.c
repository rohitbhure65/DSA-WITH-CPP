#include <stdio.h>      // Includes the standard input/output library
#include <stdlib.h>     // Includes the standard library for memory allocation

// Definition of the linked list node
struct node {
    int data;             // Data field to store data
    struct node *next;    // Pointer to the next node
};

// Insertion Operations
// Insert a Node at the Beginning of Linked List
struct node* insertAtHead(struct node **head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node
    newNode->data = data;  // Set the data of the new node
    newNode->next = *head; // Point the new node's next to the current head
    *head = newNode;       // Update the head to the new node
    printf("Insert a Node at the Beginning of Linked List\n");
}

// Insert a Node at The Tail of the Linked List
struct node* insertAtEnd(struct node **head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node
    struct node *cur = *head;       // Temporary pointer to traverse the list
    newNode->data = data;           // Set the data of the new node
    newNode->next = NULL;           // Set the new node's next to NULL as it will be the last node

    if (cur == NULL) {              // If the list is empty
        *head = newNode;            // Set the head to the new node
    } else {
        while (cur->next != NULL) { // Traverse to the end of the list
            cur = cur->next;
        }
        cur->next = newNode;        // Link the last node to the new node
    }
    printf("Insert a Node at The Tail of the Linked List\n");
}

// Insert a Node at the Given index On the Linked List
struct node* insertAtindex(struct node **head, int data, int index) {
    if (index == 0) {
        insertAtHead(head, data);    // If index is 0, insert at the head
    } else {
        struct node *newNode = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node
        newNode->data = data;        // Set the data of the new node
        newNode->next = NULL;        // Initialize the new node's next to NULL

        struct node *cur = *head;    // Temporary pointer to traverse the list
        for (int i = 0; i < index - 1 && cur != NULL; i++) { // Traverse to the position before the insertion point
            cur = cur->next;
        }

        if (cur == NULL) {           // If index is out of bounds, insert at the end
            insertAtEnd(head, data);
        } else {
            newNode->next = cur->next; // Link the new node to the next node
            cur->next = newNode;       // Link the current node to the new node
        }
    }
    printf("Insert a Node at the Given index On the Linked List\n");
}

// Deletion Operations
// Deleting The first Node in Singly Linked List
void *deletefirst(struct node **head) {
    struct node *temp;
    if (*head == NULL)
        return *head;               // If the list is empty, return
    temp = *head;                   // Temporary pointer to hold the head
    *head = (*head)->next;          // Update the head to the next node
    free(temp);                     // Free the old head node
    printf("Deleting The first Node in Singly Linked List\n");
}

// Deleting the last Node in Singly Linked List
void *deletelast(struct node **head) {
    struct node *temp = NULL, *curr = *head;
    if (*head == NULL) {
        return *head;               // If the list is empty, return
    }
    while (curr->next) {            // Traverse to the last node
        temp = curr;
        curr = curr->next;
    }
    if (temp != NULL) {             // If the list has more than one node
        temp->next = NULL;          // Set the second last node's next to NULL
    } else {
        *head = NULL;               // If the list has only one node, set head to NULL
    }
    free(curr);                     // Free the last node
    printf("Deleting the last Node in Singly Linked List\n");
}

// Delete a Linked Node at given position
void *deleteNode(struct node **head, int position) {
    if (*head == NULL) {
        printf("Linked List is Empty!");
        return *head;               // If the list is empty, return
    }
    struct node *temp = *head;
    if (position == 0) {
        *head = temp->next;         // Update the head if the position is 0
        free(temp);                 // Free the old head node
        return *head;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++) { // Traverse to the node before the position
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
        return *head;               // If position is out of bounds, return
    struct node *next = temp->next->next; // Temporary pointer to hold the next node
    free(temp->next);               // Free the node at the position
    temp->next = next;              // Link the current node to the next node
    printf("Delete a Linked Node at given position\n");
}

// Deleting all Nodes on Linked List
void *deleteLinkedList(struct node **head) {
    struct node *auxilaryNode, *iterator;
    iterator = *head;
    while (iterator) {              // Traverse the list
        auxilaryNode = iterator->next; // Temporary pointer to hold the next node
        free(iterator);             // Free the current node
        iterator = auxilaryNode;    // Move to the next node
    }
    *head = NULL;                   // Set the head to NULL
    printf("Deleting all Nodes on Linked List\n");
}

// Traversing of the Linked List
struct node* display(struct node *head) {
    struct node *temp = head;       // Temporary pointer to traverse the list
    while (temp != NULL) {          // Traverse the list until the end
        printf("%d->", temp->data); // Print the data of the current node
        temp = temp->next;          // Move to the next node
    }
    printf("NULL\n");               // Print NULL to indicate the end of the list
}

// Main function
int main() {
    struct node *head = NULL;       // Initialize the head of the list to NULL

    insertAtHead(&head, 1);         // Insert a node with data 1 at the head
    display(head);                  // Display the list

    insertAtEnd(&head, 2);          // Insert a node with data 2 at the end
    display(head);                  // Display the list

    insertAtEnd(&head, 3);          // Insert a node with data 3 at the end
    insertAtEnd(&head, 4);          // Insert a node with data 4 at the end
    insertAtEnd(&head, 5);          // Insert a node with data 5 at the end
    insertAtEnd(&head, 6);          // Insert a node with data 6 at the end
    display(head);                  // Display the list

    insertAtindex(&head, 7, 5);     // Insert a node with data 7 at index 5
    display(head);                  // Display the list

    deletefirst(&head);             // Delete the first node
    display(head);                  // Display the list

    deletelast(&head);              // Delete the last node
    display(head);                  // Display the list

    deleteNode(&head, 3);           // Delete the node at position 3
    display(head);                  // Display the list

    deleteLinkedList(&head);        // Delete all nodes in the list
    display(head);                  // Display the list

    return 0;                       // Return from main
}