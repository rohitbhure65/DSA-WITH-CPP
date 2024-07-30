#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// Define a structure for the stack node
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Define a structure for the stack
typedef struct stack {
    struct Node *top;
} stack;

// Function to create a new stack
struct stack *createStack() {
    struct stack *stk = (struct stack *)malloc(sizeof(struct stack));
    stk->top = NULL;  // Initialize top as NULL
    return stk;       // Return the created stack
}

// Function to push an element onto the stack
void push(struct stack *stk, int data) {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (!temp) {
        printf("Heap/Stack Overflow\n");  // Check for memory allocation failure
        return;
    }
    temp->data = data;  // Set the data
    temp->next = stk->top;  // Link the new node to the current top
    stk->top = temp;    // Update the top to the new node
}

// Function to check if the stack is empty
int isEmpty(struct stack *stk) {
    return stk->top == NULL;  // Return 1 if stack is empty, 0 otherwise
}

// Function to get the size of the stack
int size(struct stack *stk) {
    int count = 0;        // Initialize count
    struct Node *temp;
    if (isEmpty(stk)) {
        return 0;         // Return 0 if stack is empty
    }
    temp = stk->top;      // Start from the top
    while (temp) {
        temp = temp->next;  // Move to the next node
        count++;          // Increment count
    }
    return count;         // Return the size of the stack
}

// Function to pop an element from the stack
int pop(struct stack *stk) {
    int data;
    struct Node *temp;
    if (isEmpty(stk)) {
        return INT_MIN;   // Return INT_MIN if stack is empty
    }
    temp = stk->top;      // Store the current top
    stk->top = stk->top->next;  // Update the top to the next node
    data = temp->data;    // Store the data of the popped node
    free(temp);           // Free the memory of the popped node
    return data;          // Return the popped data
}

// Function to peek at the top element of the stack
int peek(struct stack *stk) {
    if (isEmpty(stk)) {
        return INT_MIN;   // Return INT_MIN if stack is empty
    }
    return stk->top->data;  // Return the data of the top element
}

// Function to delete the stack and free the memory
void deleteStack(struct stack *stk) {
    struct Node *temp, *p;
    p = stk->top;  // Start from the top
    while (p) {
        temp = p->next;  // Store the next node
        free(p);         // Free the current node
        p = temp;        // Move to the next node
    }
    free(stk);  // Free the stack structure
}

int main() {
    struct stack *stk = createStack();  // Create a new stack

    // Push elements onto the stack
    for (int i = 0; i < 10; i++) {
        push(stk, i);
    }

    // Print the top element of the stack
    printf("Top element is %d\n", peek(stk));

    // Print the size of the stack
    printf("Stack size is %d\n", size(stk));

    // Pop elements from the stack and print them
    for (int i = 0; i < 10; i++) {
        printf("Pop element is %d\n", pop(stk));
    }

    // Check if the stack is empty
    if (isEmpty(stk))
        printf("Stack is empty\n");
    else 
        printf("Stack is not empty\n");

    // Delete the stack and free memory
    deleteStack(stk);

    return 0;
}