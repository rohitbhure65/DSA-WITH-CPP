#include <stdio.h> 

int main() {
    int number, copy, reminder, sum = 0; 
    
    // Prompt the user to enter a number
    printf("Enter a number\n"); 
    scanf("%d", &number);
    
    // Store the original number in a copy variable
    copy = number; 
    
    // This loop will reverse the digits of the number
    while (number > 0) {
        // Get the last digit of the number
        reminder = number % 10;
        
        // Add the digit to the reversed number
        // For example, if the original number is 123,
        // after the first iteration, sum will be 3,
        // after the second iteration, sum will be 32,
        // and after the third iteration, sum will be 321.
        sum = reminder + sum * 10;
        
        // Remove the last digit from the number
        number = number / 10;
    }

    // Compare the original number (copy) with the reversed number (sum)
    if (copy == sum) {
        // If they are equal, the number is a palindrome
        printf("number is palindrome"); 
    } else {
        // If they are not equal, the number is not a palindrome
        printf("not palindrome"); 
    }

    return 0; 
}
