#include<stdio.h>  // Include standard input/output library
#include<stdlib.h> // Include standard library for dynamic memory allocation

// Define a structure for ListNode, representing a node in the linked list
typedef struct ListNode {
    int data;              // Data stored in the node
    struct ListNode *next; // Pointer to the next node in the list
} ListNode;

// Define a structure for Queue, representing the queue itself
typedef struct Queue {
    struct ListNode *front; // Pointer to the front node of the queue
    struct ListNode *rear;  // Pointer to the rear node of the queue
} Queue;

// Function to create and initialize a new queue
struct Queue *createQueue() {
    struct Queue *Q = (struct Queue *)malloc(sizeof(struct Queue)); // Allocate memory for the queue
    if(!Q) // Check if memory allocation failed
        return NULL;
    Q->front = Q->rear = NULL; // Initialize front and rear pointers to NULL
    return Q; // Return the created queue
}

// Function to get the size of the queue
int size(struct Queue *Q) {
    struct ListNode *temp = Q->front; // Start from the front node
    int count = 0; // Initialize count to 0

    if (Q->front == NULL && Q->rear == NULL) // If the queue is empty
        return 0;
    
    while (temp != Q->rear) { // Traverse the queue until the rear node
        count++; // Increment count for each node
        temp = temp->next; // Move to the next node
    }
    if (temp == Q->rear) { // If temp is the rear node
        count++;
    }
    return count; // Return the total count of nodes
}

// Function to get the front element of the queue
int frontElement(struct Queue *Q) {
    return Q->front->data; // Return the data of the front node
}

// Function to get the rear element of the queue
int rearElement(struct Queue *Q) {
    return Q->rear->data; // Return the data of the rear node
}

// Function to check if the queue is empty
void isEmpty(struct Queue *Q) {
    if (Q->front == NULL && Q->rear == NULL) // If both front and rear are NULL
        printf("Queue is Empty\n"); // Print "Queue is Empty"
    else
        printf("Queue is Not Empty\n"); // Print "Queue is Not Empty"
}

// Function to add an element to the queue
void enQueue(struct Queue *Q, int data) {
    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode)); // Allocate memory for the new node
    temp->data = data; // Set the data of the new node
    temp->next = NULL; // Set the next pointer of the new node to NULL
    if (Q->rear == NULL) { // If the queue is empty
        Q->front = Q->rear = temp; // Both front and rear point to the new node
    } else {
        Q->rear->next = temp; // Link the new node to the end of the queue
        Q->rear = temp; // Update the rear pointer to the new node
        printf("Enqueued element: %d\n", data); // Print the enqueued element
    }
}

// Function to remove an element from the queue
void deQueue(struct Queue *Q) {
    struct ListNode *temp;
    if (Q->front == NULL) { // If the queue is empty
        printf("Queue is Empty\n"); // Print "Queue is Empty"
        return;
    } else {
        temp = Q->front; // Get the front node
        Q->front = Q->front->next; // Update the front pointer to the next node
        if (Q->front == NULL) { // If the queue becomes empty
            Q->rear = NULL; // Set the rear pointer to NULL
        }
        printf("Dequeued element is: %d\n", temp->data); // Print the dequeued element
        free(temp); // Free the memory of the dequeued node
    }
}

// Function to print the elements of the queue
void printQueue(struct Queue *Q) {
    struct ListNode *temp = Q->front; // Start from the front node
    if (Q->front == NULL && Q->rear == NULL) { // If the queue is empty
        printf("Queue is Empty\n"); // Print "Queue is Empty"
        return;
    }
    while (temp != NULL) { // Traverse the queue until the end
        printf("%d\n", temp->data); // Print the data of the current node
        temp = temp->next; // Move to the next node
        if (temp != NULL) // If there is a next node
            printf("---->"); // Print the separator
    }
}

// Function to delete the queue and free the allocated memory
void deleteQueue(struct Queue *Q) {
    struct ListNode *temp;
    while (Q->front) { // While there are elements in the queue
        temp = Q->front; // Get the front node
        printf("Element being deleted: %d\n", temp->data); // Print the element being deleted
        Q->front = Q->front->next; // Update the front pointer to the next node
        free(temp); // Free the memory of the deleted node
    }
    free(Q); // Free the memory of the queue
}

// Main function to test the queue operations
int main() {
    struct Queue *Q = createQueue(); // Create a queue

    enQueue(Q, 1);  // Add the element '1' to the queue
    enQueue(Q, 2);  // Add the element '2' to the queue
    enQueue(Q, 3);  // Add the element '3' to the queue
    enQueue(Q, 4);  // Add the element '4' to the queue
    
    printf("Size of Queue: %d\n", size(Q));  // Print the size of the queue
    printf("Front element is: %d\n", frontElement(Q));  // Print the front element
    printf("Rear element is: %d\n", rearElement(Q));  // Print the rear element

    deQueue(Q);  // Remove the front element from the queue
    deQueue(Q);  // Remove the front element from the queue
    deQueue(Q);  // Remove the front element from the queue

    enQueue(Q, 15);  // Add the element '15' to the queue
    enQueue(Q, 100);  // Add the element '100' to the queue
    enQueue(Q, 150);  // Add the element '150' to the queue

    printf("Size of Queue: %d\n", size(Q));  // Print the size of the queue
    printf("Front element is: %d\n", frontElement(Q));  // Print the front element
    printf("Rear element is: %d\n", rearElement(Q));  // Print the rear element

    deleteQueue(Q);  // Delete the queue and free the allocated memory
    return 0;  // Return 0 to indicate successful execution
}
