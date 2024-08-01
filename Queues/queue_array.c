#include <stdio.h>      // Standard input and output library for printf function
#include <stdlib.h>     // Standard library for malloc and free functions
#include <limits.h>     // Defines constants for integer limits (not used in this code but included)

typedef struct Queue{
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
    printf("Enqueued element : %d\n", data); // print the Enqueued element
}

int deQueue(struct Queue *Q){
    int data = INT_MIN;
    if(isEmpty(Q)){  // Check if the queue is empty
        printf("Queue is Empty\n");
        return data;  // Return INT_MIN if the queue is empty
    }
    data = Q->array[Q->front];  // Get the front element of the queue
    if(Q->front == Q->rear){  // If the queue has only one element
        Q->front = Q->rear = -1;  // Reset front and rear
        Q->size = 0;  // Reset size to 0
    } else {
        Q->front = (Q->front + 1) % Q->capacity;  // Move front to the next element
        Q->size -= 1;  // Decrease the size of the queue
    }
    printf("Dequeued element is : %d\n", data);  // Print the dequeued element
    return data;  // Return the dequeued element
}

void deleteQueue(struct Queue *Q){
    if(Q){  // Check if the queue is not NULL
        if(Q->array){  // Check if the array is not NULL
            free(Q->array);  // Free the memory allocated for the array
        }
        free(Q);  // Free the memory allocated for the queue
    }
}

int main()
{
    struct Queue *Q = createQueue(4);  // Create a queue with a capacity of 4 elements

    enQueue(Q, 1);  // Add the element '1' to the queue
    enQueue(Q, 2);  // Add the element '2' to the queue
    enQueue(Q, 3);  // Add the element '3' to the queue
    enQueue(Q, 4);  // Add the element '4' to the queue
    
    printf("Size of Queue: %d\n", size(Q));  // Print the size of the queue
    printf("Front element is : %d\n", frontElement(Q));  // Print the front element
    printf("Rear element is : %d\n", rearElement(Q));  // Print the rear element

    deQueue(Q);  // Remove the front element from the queue
    deQueue(Q);  // Remove the front element from the queue
    deQueue(Q);  // Remove the front element from the queue
    deQueue(Q);  // Remove the front element from the queue
    deQueue(Q);  // Attempt to remove an element from an empty queue

    enQueue(Q, 15);  // Add the element '15' to the queue
    enQueue(Q, 100);  // Add the element '100' to the queue
    enQueue(Q, 150);  // Add the element '150' to the queue

    printf("Size of Queue : %d\n", size(Q));  // Print the size of the queue
    printf("Front element is : %d\n", frontElement(Q));  // Print the front element
    printf("Rear element is : %d\n", rearElement(Q));  // Print the rear element

    deleteQueue(Q);  // Delete the queue and free the allocated memory
    return 0;  // Return 0 to indicate successful execution
}