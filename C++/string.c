#include <stdio.h>
#include <string.h>

int main()
{

    ///////////////////////////// for without space words
    char strr[100]; // Chararray

    printf("Enter string\n");
    scanf("%s", &strr);
    // printf("%s\n", strr);

    for (int i = 0; strr[i] != '\0'; i++)
    {
        printf("%c", strr[i]);
    }

    ///////////////////////// for more than two words
    // we are using fgets function for storing more than one words
    char input[100];

    printf("Enter a string with spaces: \n");
    // // fgets reads a line from the specified stream and stores it into the string
    // // Stops reading after 99 characters or when a newline character is found
    fgets(input, sizeof(input), stdin);

    // // Print the input string
    printf("You entered: %s", input);

    for (int i = 0; input[i] != '\0'; i++)
    {
        printf("%c\n", input[i]);
    }
    
    return 0;
}