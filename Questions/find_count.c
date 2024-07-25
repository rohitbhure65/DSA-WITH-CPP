// int findCount(int arr[], int length, int num, int diff);

// The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’.
// Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.

// Example:
// Input:

// arr: 12 3 14 56 77 13
// num: 13
// diff: 2
// Output:
// 3

// Explanation:
// Elements of ‘arr’ having absolute difference of less than or equal to ‘diff’ i.e. 2 with ‘num’ i.e. 13 are 12, 13 and 14.

#include<stdio.h>
#include<stdlib.h>

// Function to find the count of elements in the array that have an absolute difference
// less than or equal to a given value (diff) from a given number (num).
int find_count(int arr[], int diff, int num, int size) {
    int count = 0;  // Initialize count to 0
    for(int i = 0; i < size; i++) {  // Iterate through the array
        // Check if the absolute difference between the current array element and the given number is less than or equal to the given difference
        if(abs(arr[i] - num) <= diff)
            count++;  // Increment count if the condition is met
    }
    // Return the count if it's greater than 0, otherwise return -1
    return count > 0 ? count : -1;   
}
    
int main() {
    int arr[] = {12, 3, 14, 56, 77, 13};  // Initialize an array of integers
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int num = 13;  // The given number to compare with
    int diff = 2;  // The allowed difference

    // Call the find_count function and print the result
    printf("%d", find_count(arr, diff, num, size));
    return 0;  // Return 0 to indicate successful execution
}