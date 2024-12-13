#include <iostream>
using namespace std;

// Function to calculate the sum of elements at even indices
int evensum(int arr[], int size) {
    int fsum = 0;
    int bsum = 0;

    // Loop through the array using two pointers
    for (int i = 0, j = size - 1; i <= j; i += 2, j -= 2) {
        fsum += arr[i];   // Add front element at even index
        if (i != j) {     // Avoid double-counting the middle element in odd-sized arrays
            bsum += arr[j];
        }
    }
    return fsum + bsum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << evensum(arr, size) << endl; // Call the function and print the result
    return 0;
}
