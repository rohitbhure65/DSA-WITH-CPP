#include <stdio.h>      // Standard input and output library for printf function
#include <stdlib.h>     // Standard library for malloc and free functions
#include <limits.h>     // Defines constants for integer limits (not used in this code but included)

typedef struct Queue
{
    int front, rear;   // Indices for the front and rear of the queue
    int capacity;      // Maximum number of elements the queue can hold
    int size;          // Current number of elements in the queue
    int *array;        // Dynamic array to hold the elements of the queue
} Queue;               // Define a new type 'Queue' which is a struct

// create an empty Queue with a given capacity
struct Queue *createQueue(int capacity)
{
    struct Queue *Q = (struct Queue *)malloc(sizeof(struct Queue)); // Allocate memory for the queue
    if (!Q)
        return NULL;  // Return NULL if memory allocation fails

    Q->capacity = capacity;  // Set the capacity of the queue
    Q->front = -1;           // Initialize front index to -1 indicating the queue is empty
    Q->rear = -1;            // Initialize rear index to -1 indicating the queue is empty
    Q->size = 0;             // Initialize the size of the queue to 0

    Q->array = (int *)malloc(Q->capacity * sizeof(int)); // Allocate memory for the array to hold queue elements
    if (!Q->array)
        return NULL;  // Return NULL if memory allocation for the array fails

    return Q;  // Return the created queue
}

// return the queue size
int size(struct Queue *Q)
{
    return Q->size;  // Return the current size of the queue
}

// return front element of the queue
int frontElement(struct Queue *Q)
{
    return Q->array[Q->front];  // Return the element at the front of the queue
}

// return rear element of the queue
int rearElement(struct Queue *Q)
{
    return Q->array[Q->rear];  // Return the element at the rear of the queue
}

// check if queue is empty or not
int isEmpty(struct Queue *Q)
{
    return (Q->size == 0);  // Return 1 (true) if the queue is empty, otherwise return 0 (false)
}

// check if queue is full or not
int isFull(struct Queue *Q)
{
    return (Q->size == Q->capacity);  // Return 1 (true) if the queue is full, otherwise return 0 (false)
}

// Adding element to the Queue
void enQueue(struct Queue *Q, int data)
{
    if (isFull(Q))  // Check if the queue is full
    {
        printf("Queue Overflow\n");  // Print error message if the queue is full
        return;  // Exit the function if the queue is full (missing return statement in the original code)
    }

    Q->rear = (Q->rear + 1) % Q->capacity;  // Update the rear index using circular increment
    Q->array[Q->rear] = data;  // Add the new element at the rear index

    if (Q->front == -1)        // If the queue was empty (front index is -1)
        Q->front = Q->rear;    // Set the front index to the rear index

    Q->size += 1;  // Increment the size of the queue
}

int main()
{
    struct Queue *Q = createQueue(4);  // Create a queue with a capacity of 4 elements
    enQueue(Q, 1);                     // Add the element '1' to the queue
    return 0;                          // Return 0 to indicate successful execution
}