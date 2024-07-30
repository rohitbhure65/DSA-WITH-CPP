#include <stdio.h>

int main(){
    int i = 8; // Initialize integer variable i with value 8
    int *j; // Declare an integer pointer j
    j = &i; // Assign the address of i to pointer j
    
    // Print the address of i
    // printf("Add i = %p\n", &i); // Using %p to print the address in hexadecimal
    printf("Add i = %u\n", &i); // Print the address of i using %u to display the address in unsigned integer format
    printf("Add j = %u\n", j); // Print the address stored in j, which is the address of i
    printf("Add j = %u\n", &j); // Print the address of pointer j itself
    
    printf("value i = %d\n", i); // Print the value of i
    printf("value i = %d\n", *(&i)); // Print the value at the address of i, which is the value of i
    printf("value j = %d\n", *j); // Print the value at the address stored in j, which is the value of i
    
    return 0; // Return 0 to indicate successful execution
}