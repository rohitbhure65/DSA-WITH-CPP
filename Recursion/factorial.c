#include <stdio.h>

// Function to calculate sum of n natural numbers using recursion
int factorial(int n)
{
    if (n <= 1)
        return n;                // Base case: 0! = 1
    return n + factorial(n - 1); // Recursive case
}

int main()
{
    int num = 100;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
