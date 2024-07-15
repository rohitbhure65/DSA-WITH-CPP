#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std; // Allows the use of standard library names without prefixing them with std::

// Function for Selection Sort
void selectionSort(int arr[], int n){
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i; // Assume the minimum is the first element
        for (j = i + 1; j < n; j++) // Iterate through unsorted elements
            if (arr[j] < arr[min_idx]) // If a smaller element is found
                min_idx = j; // Update the index of the minimum element

        // Swap the found minimum element with the first element of the unsorted subarray
        if (min_idx != i)
            swap(arr[min_idx], arr[i]); // Swap the elements
    }
}

// Function to print an array
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++) // Iterate through the array
        cout << arr[i] << " "; // Print each element followed by a space
    cout << endl; // Print a newline at the end
}

int main(){
    int arr[] = {64, 25, 12, 22, 11}; // Initialize an array with unsorted elements
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    selectionSort(arr, n); // Call the selection sort function to sort the array
    cout << "Sorted array: \n"; // Print a message
    printArray(arr, n); // Call the function to print the sorted array
    return 0; // Return 0 to indicate successful execution
}