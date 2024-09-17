#include <stdio.h> // Preprocessor directive to include the standard input/output library

// #define: Used to define a constant or a macro. The following defines PI as 3.14.
#define PI 3.14

// #define: This defines a macro DEBUG, which can be used to conditionally include code.
#define DEBUG

int main()
{
// #ifdef: Checks if DEBUG is defined. If it is, the code inside this block will be compiled.
#ifdef DEBUG
    printf("Debug mode is ON\n");
#endif

// #if: Checks if PI is equal to 3.14. If the condition is true, the following code is included.
// #if PI == 3.14
    printf("PI is correct\n");
// #else
    // #else: If the condition in #if is false, this block is included.
    printf("PI is incorrect\n");
// #endif

    // __LINE__: This macro prints the current line number in the source code.
    printf("This is line number %d\n", __LINE__);

    // __FILE__: This macro prints the name of the current file.
    printf("This file is %s\n", __FILE__);

    // __DATE__: This macro prints the date the program was compiled.
    printf("Compiled on %s\n", __DATE__);

    // __TIME__: This macro prints the time the program was compiled.
    printf("Compiled at %s\n", __TIME__);

    return 0;
}
