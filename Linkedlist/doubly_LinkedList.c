#include <stdio.h>  // Includes the standard input-output library for functions like printf
#include <stdlib.h> // Includes the standard library functions for memory allocation, conversion, and other utilities

struct node { // Defines a structure called node
    int data; // Integer data field to store the value of the node
    struct node *next; // Pointer to the next node in the list
    struct node *prev; // Pointer to the previous node in the list
};

int main() { // Main function where the program execution starts
    struct node *head = (struct node *)malloc(sizeof(struct node)); // Allocates memory for a node and assigns it to head
    head->data = 70; // Sets the data field of the head node to 70
    head->next = NULL; // Sets the next pointer of the head node to NULL (no next node)
    head->prev = NULL; // Sets the prev pointer of the head node to NULL (no previous node)

    printf("Data: %d\n", head->data); // Prints the data field of the head node (should print 70)
    printf("Next: %d\n", head->next); // Prints the next pointer of the head node (should print 0x0 or NULL)
    printf("Prev: %d\n", head->prev); // Prints the prev pointer of the head node (should print 0x0 or NULL)

    return 0; // Returns 0 to indicate successful program termination
}
