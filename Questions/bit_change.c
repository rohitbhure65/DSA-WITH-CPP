// 3226. Number of Bit Changes to Make Two Integers Equal
// You are given two positive integers n and k.

// You can choose any bit in the binary representation of n that is equal to 1 and change it to 0.

// Return the number of changes needed to make n equal to k. If it is impossible, return -1.

 

// Example 1:

// Input: n = 13, k = 4

// Output: 2

// Explanation:
// Initially, the binary representations of n and k are n = (1101)2 and k = (0100)2.
// We can change the first and fourth bits of n. The resulting integer is n = (0100)2 = k.

// Example 2:

// Input: n = 21, k = 21

// Output: 0

// Explanation:
// n and k are already equal, so no changes are needed.

// Example 3:

// Input: n = 14, k = 13

// Output: -1

// Explanation:
// It is not possible to make n equal to k.

 

// Constraints:

// 1 <= n, k <= 106

#include<stdio.h>

// Function to calculate the minimum number of bit changes
// needed to convert integer n to integer k.
int minChanges(int n, int k) {
    int count = 0; // Initialize count to store the number of changes

    // Iterate through each bit position (0 to 30)
    for(int i = 0; i < 31; i++){
        // Create a bitmask with the ith bit set
        int bitmask = (1<<i);

        // Extract the ith bit of n
        int b1 = n & bitmask;

        // Extract the ith bit of k
        int b2 = k & bitmask;

        // If the ith bit of k is 0 and the ith bit of n is not 0,
        // we need to change the ith bit of n to 0
        if(b2 == 0 && b1 != 0){
            // Toggle the ith bit of n
            n ^= bitmask;
            // Increment the count of changes
            count++;
        }
    }
    // If n equals k after the changes, return the count
    // Otherwise, return -1 indicating it is not possible to convert n to k
    return n == k ? count : -1;
}

int main(){
    // Print the result of minChanges for n=13 and k=4
    printf("%d", minChanges(13, 4));
    return 0;
}
