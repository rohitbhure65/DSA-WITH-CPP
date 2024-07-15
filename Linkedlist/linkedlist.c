#include <stdio.h> // Includes the standard input-output library for functions like printf
#include <stdlib.h> // Includes the standard library functions for memory allocation, conversion, and other utilities

struct ListNode{ // Defines a structure called ListNode
    int data; // Integer data field to store the value of the node
    struct ListNode *link; // Pointer to the next node in the list (to create a linked list)
};

int main(){ // Main function where the program execution starts
    struct ListNode *head = NULL; // Declares a pointer to ListNode and initializes it to NULL (no nodes yet)
    head = (struct ListNode *)malloc(sizeof(struct ListNode)); // Allocates memory for a ListNode and assigns it to head
    head->data = 45; // Sets the data field of the head node to 45
    head->link = NULL; // Sets the link field of the head node to NULL (no next node)

    printf("Data: %d\n", head->data); // Prints the data field of the head node (should print 45)
    printf("Link: %d\n", head->link); // Prints the link field of the head node as a pointer (should print 0x0 or NULL)

    return 0; // Returns 0 to indicate successful program termination
}