#include<stdio.h>
#include<string.h>
// USING #define PREPROCESSER
#define PI 3.14
#define NEWLINE '\n'
#define NAME "TOM"
#define SIDE 50

// global variable
int globalvariable = 10;

int main()
{
    // USING CONST KEYWORD
    // 1 Byte -> 8 bits
    short int area = 43;
    unsigned short int aera = 32;
    signed int ra = 3432;
    unsigned int ar = 24424;
    long int a = 1;
    unsigned long int b = 2;
    unsigned long long int c = 2;
    const int size = 50; // 4 byte -> 32 bits
    const float pi = 3.14;
    char const name = 'A'; // A -> ASCI VALUE 65 -> BINARY 1000001
    printf("%d \n", size);
    printf("%f \n", pi);
    printf("%c \n", name);
    // for 
    printf("%d\n", globalvariable);
    return 0;
}

