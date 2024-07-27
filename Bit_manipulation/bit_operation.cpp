#include <iostream>
using namespace std;

// Function to get the bit at a specific position
// Example: N = 0101 (which is 5 in decimal)
// Suppose we need to get the bit at position i = 2
// 1 << i = 0100
// 0101 & 0100 = 0100
// If (n & (1 << i)) != 0, then the bit is 1
int getbit(int n, int pos) {
    return (n & (1 << pos)) != 0;
}

// Function to set the bit at a specific position
// Example: N = 0101 (which is 5 in decimal), i = 1
// 1 << i = 0010
// 0101 | 0010 = 0111
int setbit(int n, int pos) {
    return (n | (1 << pos));
}

// Function to clear the bit at a specific position
// Example: N = 0101 (which is 5 in decimal), i = 2
// ~(1 << i) = ~(0100) = 1011
// 0101 & 1011 = 0001
int clearbit(int n, int pos) {
    int mask = ~(1 << pos);
    return (n & mask);
}

// Function to update the bit at a specific position with a given value (0 or 1)
// Example: N = 0101 (which is 5 in decimal), pos = 1, value = 1
// Step 1: Create a mask to clear the bit at position 'pos'
// ~(1 << pos) = ~(0010) = 1101
// 0101 & 1101 = 0101
// Step 2: Shift the value to the correct position and OR it with the cleared number
// value << pos = 1 << 1 = 0010
// 0101 | 0010 = 0111
int updatebit(int n, int pos, int value) {
    int mask = ~(1 << pos);
    n = n & mask;
    return n | (value << pos);
}

int main() {
    // Testing getbit function: get the bit at position 2 of number 5
    cout << getbit(5, 2) << endl; // Output: 1

    // Testing setbit function: set the bit at position 1 of number 5
    cout << setbit(5, 1) << endl; // Output: 7

    // Testing clearbit function: clear the bit at position 2 of number 5
    cout << clearbit(5, 2) << endl; // Output: 1

    // Testing updatebit function: update the bit at position 1 of number 5 to 1
    cout << updatebit(5, 1, 1) << endl; // Output: 7

    return 0;
}
