#include <stdio.h>

// Function to calculate nth Fibonacci number using recursion
int fibonacci(int n)
{
    // if (n == 0) {
    //     return 0; // Base case
    // } else if (n == 1) {
    //     return 1; // Base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main()
{
    int num = 30;
    printf("Fibonacci series up to %d terms:\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
