#include<stdio.h>
#include<string.h>

int main(){
    // char strr[100]; // Chararray

    // printf("Enter string\n");
    // scanf("%s", &strr);
    // printf("%s\n", strr);

    // we are using fgets function for storing more than one words
    char input[100];

    printf("Enter a string with spaces: \n");
    // fgets reads a line from the specified stream and stores it into the string
    // Stops reading after 99 characters or when a newline character is found
    fgets(input, sizeof(input), stdin);

    // Print the input string
    printf("You entered: %s", input);

    return 0;
}