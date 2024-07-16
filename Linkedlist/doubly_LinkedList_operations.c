#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct node {
    int data;             // Data to be stored in the node
    struct node *next;    // Pointer to the next node in the list
    struct node *prev;    // Pointer to the previous node in the list
};

// Function to insert a node at the beginning of the doubly linked list
struct node *insertAtBeginng(struct node **head, int data) {
    struct node *curr = *head;   // Pointer to the current head of the list
    struct node *newnode = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node

    if (!newnode) {               // Check if memory allocation was successful
        printf("Memory error!");  // Print error message if allocation failed
        return *head;             // Return the current head
    }

    newnode->next = NULL;         // Initialize the next pointer of the new node to NULL
    newnode->data = data;         // Set the data of the new node
    newnode->prev = NULL;         // Initialize the previous pointer of the new node to NULL

    if (curr == NULL) {           // If the list is empty
        *head = newnode;          // Make the new node the head of the list
        return *head;             // Return the new head
    }

    newnode->next = *head;        // Set the next pointer of the new node to the current head
    (*head)->prev = newnode;      // Set the previous pointer of the current head to the new node
    *head = newnode;              // Update the head to be the new node

    printf("Inserted a node at the beginning with data: %d\n", data);  // Print confirmation message
    return *head;                 // Return the new head
}

// Function to insert a node at the tail of the doubly linked list
struct node *insertAtTail(struct node **head, int data) {
    struct node *curr = *head;   // Pointer to the current head of the list
    struct node *newNode = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node

    if (!newNode) {               // Check if memory allocation was successful
        printf("Memory Error");  // Print error message if allocation failed
        return *head;            // Return the current head
    }

    newNode->next = NULL;         // Initialize the next pointer of the new node to NULL
    newNode->data = data;         // Set the data of the new node
    newNode->prev = NULL;         // Initialize the previous pointer of the new node to NULL

    if (curr == NULL)             // If the list is empty
        *head = newNode;          // Make the new node the head of the list
    else {
        while (curr->next != NULL) // Traverse to the end of the list
        {
            curr = curr->next;      // Move to the next node
        }
        curr->next = newNode;       // Set the next pointer of the last node to the new node
        newNode->prev = curr;       // Set the previous pointer of the new node to the last node
    }

    printf("Inserted a node at the tail with data: %d\n", data);  // Print confirmation message
    return *head;                // Return the head
}

// Function to insert a node at the given position of the doubly linked list
struct node* insertAtPosition(struct node **head, int position, int data) {
    struct node *curr = *head; // Create a pointer to traverse the list, starting from the head
    struct node *newNode = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node

    if (!newNode) {            // Check if memory allocation was successful
        printf("Memory Error"); // Print error message if memory allocation failed
        return *head;          // Return the head of the list unchanged
    }

    newNode->data = data;      // Initialize the new node with the given data
    newNode->next = NULL;      // Set the next pointer of the new node to NULL
    newNode->prev = NULL;      // Set the prev pointer of the new node to NULL

    if (position == 0) {
        newNode->next = *head;       // Set the new node's next to the current head
        if (*head != NULL) {
            (*head)->prev = newNode; // Update the previous head's prev pointer if the list is not empty
        }
        *head = newNode;             // Update the head to be the new node
    } else {
        while (--position && curr != NULL) { // Traverse the list to find the position to insert
            curr = curr->next;
        }

        if (curr == NULL) {           // Check if the position is out of bounds
            printf("Position out of bounds"); // Print error message if position is out of bounds
            free(newNode);            // Free the allocated memory for the new node
            return *head;             // Return the head of the list unchanged
        }

        newNode->next = curr->next;   // Insert the new node at the specified position
        newNode->prev = curr;         // Set the new node's prev to the current node
        if (curr->next != NULL) {
            curr->next->prev = newNode; // Update the next node's prev pointer if the new node is not inserted at the end
        }
        curr->next = newNode;          // Update the current node's next pointer to the new node
    }

    printf("Inserted a node at the given position with data: %d\n", data); // Print confirmation message
    return *head;                      // Return the head of the list
}

// Delete the first node in Doubly Linked List
void deleteFirstNode(struct node **head) {
    struct node *temp = *head;          // Create a temporary pointer to the first node
    if (*head == NULL) {                // Check if the list is empty
        printf("List is Empty!");       // Print error message if the list is empty
        return;                         // Return without deleting
    }
    temp = *head;                       // Set temp to the first node
    *head = (*head)->next;              // Update head to the next node
    if (*head != NULL) {                // Check if the new head is not NULL
        (*head)->prev = NULL;           // Set the prev pointer of the new head to NULL
    }
    free(temp);                         // Free the memory of the old head
    printf("Deleted the first node in Doubly Linked List\n"); // Print a confirmation message
    return;
}

// Delete the tail node in Doubly Linked List
void deleteLastNode(struct node **head) {
    struct node *temp = *head, *curr = *head; // Create pointers to traverse the list
    if (*head == NULL) {             // Check if the list is empty
        printf("Linked List is Empty!"); // Print error message if the list is empty
        return;                          // Return without deleting
    } else {
        while (curr->next != NULL) { // Traverse to the last node
            curr = curr->next;
        }

        temp = curr->prev;           // Set temp to the second last node
        if (temp != NULL) {          // Check if temp is not NULL (list has more than one node)
            temp->next = curr->next; // Set the next pointer of the second last node to NULL
        } else {                     // List has only one node
            *head = NULL;            // Set head to NULL
        }
        free(curr);                  // Free the memory of the last node
        printf("Deleted the tail node in Doubly Linked List\n"); // Print a confirmation message
    }
    return;
}

// Function to traverse and display the doubly linked list
void display(struct node *head) {
    struct node *temp = head;      // Pointer to traverse the list

    while (temp != NULL) {         // Traverse the list until the end
        printf("%d->", temp->data); // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
    printf("Null\n");               // Print end of list
}

int main() {
    struct node *head = NULL;    // Initialize the head of the list to NULL

    // Insert nodes at the beginning
    insertAtBeginng(&head, 1);
    insertAtBeginng(&head, 2);
    display(head);  // Display the list

    insertAtBeginng(&head, 3);
    insertAtBeginng(&head, 9);
    display(head);  // Display the list

    insertAtBeginng(&head, 4);
    display(head);  // Display the list

    insertAtTail(&head, 7); // Insert nodes at the tail
    display(head);  // Display the list

    insertAtTail(&head, 90);
    display(head);  // Display the list

    insertAtPosition(&head, 4, 6); // Insert a node with data 6 at index 4
    display(head);  // Display the list

    deleteFirstNode(&head); // Delete the first node
    display(head);  // Display the list

    deleteLastNode(&head); // Delete the last node
    display(head);  // Display the list

    return 0;  // Exit the program
}