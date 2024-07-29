#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top; // Index of the top element in the stack
    int capacity; // Capacity of the stack
    int *array; // Dynamic array to store stack elements
};

// Function to initialize the stack
void initStack(struct Stack **s, int capacity) {
    *s = (struct Stack *)malloc(sizeof(struct Stack)); // Allocate memory for the stack
    (*s)->capacity = capacity; // Set the initial capacity
    (*s)->top = -1; // Set top to -1 indicating stack is empty
    (*s)->array = (int *)malloc((*s)->capacity * sizeof(int)); // Allocate memory for the dynamic array
}

// Function to check if the stack is full
int isFull(struct Stack *s) {
    return s->top == s->capacity - 1; // Stack is full if top index is at capacity-1
}

// Function to check if the stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1; // Stack is empty if top index is at -1
}

// Function to resize the stack's array when it is full
void resize(struct Stack *s) {
    s->capacity *= 2; // Double the capacity
    s->array = (int *)realloc(s->array, s->capacity * sizeof(int)); // Reallocate memory for the new capacity
}

// Function to push an element to the stack
void push(struct Stack **s, int data){
    if (isFull(*s)){ // Check if the stack is full
        resize(*s); // Resize the stack
    }
    (*s)->array[++(*s)->top] = data; // Increment top and push data to stack
    printf("%d PUSH TO STACK\n", data); // Print push message
}

// Function to pop an element from the stack
int pop(struct Stack **s){
    if(isEmpty(*s)){ // Check if the stack is empty
        printf("Stack Underflow\n"); // Print underflow message
        return -1; // Return -1 to indicate failure
    }
    printf("%d POP TO STACK\n", (*s)->array[(*s)->top]); // Print pop message
    return (*s)->array[(*s)->top--]; // Pop element from stack and decrement top
}

// Function to get the top element of the stack
int peek(struct Stack **s){
    if(isEmpty(*s)){ // Check if the stack is empty
        printf("Stack Underflow\n"); // Print underflow message
        return -1; // Return -1 to indicate failure
    }
    printf("%d is Peek Element\n", (*s)->array[(*s)->top]); // Print top element
    return (*s)->array[(*s)->top]; // Return the top element
}

// Function to display the stack elements
void display(struct Stack *s) {
    if (isEmpty(s)) { // Check if the stack is empty
        printf("Stack is empty!\n"); // Print empty stack message
        return; // Exit the function
    }
    printf("Stack elements:\n"); // Print message
    for (int i = s->top; i >= 0; i--) { // Iterate through stack elements
        printf("%d\n", s->array[i]); // Print each element
    }
}

int main() {
    int initialCapacity = 5; // Initial capacity of the stack
    struct Stack *s;

    // Initialize the stack
    initStack(&s, initialCapacity);

    push(&s, 1); // Push 1 to stack
    push(&s, 2); // Push 2 to stack
    push(&s, 3); // Push 3 to stack
    pop(&s); // Pop element from stack
    pop(&s); // Pop element from stack
    push(&s, 4); // Push 4 to stack
    push(&s, 5); // Push 5 to stack
    push(&s, 6); // Push 6 to stack
    peek(&s); // Peek top element of stack
    display(s); // Display stack elements

    // Free allocated memory
    free(s->array); // Free the dynamic array
    free(s); // Free the stack structure
    return 0; // Return 0 to indicate successful execution
}
