#include <stdio.h>

// Function to perform binary search using recursion
int binarySearch(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Base case: element found
        if (arr[mid] == target) {
            return mid;
        }
        
        // Recursive case: search in the left half
        if (arr[mid] > target) {
            return binarySearch(arr, low, mid - 1, target);
        }
        
        // Recursive case: search in the right half
        return binarySearch(arr, mid + 1, high, target);
    }
    
    // Base case: element not found
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
