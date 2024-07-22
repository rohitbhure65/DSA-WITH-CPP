#include <stdio.h>
#include <limits.h>

// Redefining INT_MIN for the system
#define INT_MIN (-INT_MAX-1)

// Function to reverse an integer
int reverse(int x) {
    long ans = 0;  // Use long to handle potential overflow

    // Loop to extract digits and form the reversed number
    while (x != 0) {
        int r = x % 10;  // Get the last digit
        ans = r + ans * 10;  // Append the digit to the reversed number
        x = x / 10;  // Remove the last digit from the original number
    }

    // Check for overflow conditions
    if (ans > INT_MAX || ans < INT_MIN) return 0;

    return ans;  // Return the reversed number
}

int main() {
    int n;

    // Prompt the user to enter a number
    printf("Enter a number\n");
    scanf("%d", &n);

    // Call the reverse function and print the result
    printf("%d", reverse(n));
    return 0;
}
