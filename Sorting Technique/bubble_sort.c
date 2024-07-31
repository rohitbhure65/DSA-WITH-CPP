#include<stdio.h>   // Include the standard input-output library
#include<stdbool.h> // Include the standard boolean library

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
 	bool swapped;   // Boolean variable to check if a swap happened
	for (int i = 0; i < n - 1; i++) {   // Outer loop for each pass
		swapped = false;   // Reset swapped to false at the beginning of each pass
		for (int j = 0; j < n - i - 1; j++) {   // Inner loop to compare adjacent elements
			if (arr[j] > arr[j + 1]) {   // If the current element is greater than the next element
                int temp = arr[j];       // Swap them
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
				swapped = true;         // Set swapped to true since a swap occurred
			}
		}

		// If no two elements were swapped by inner loop, then break
		if (!swapped)
			break;   // Array is already sorted, no need to continue
	}
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {   // Loop through the array elements
        printf("%d ", arr[i]);   // Print each element
    }
}

int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };   // Initialize the array
	int N = sizeof(arr) / sizeof(arr[0]);   // Calculate the number of elements in the array
	bubbleSort(arr, N);   // Call the bubbleSort function
	printf("Sorted Array\n");   // Print a message
	printArray(arr, N);   // Call the printArray function to print sorted array
    return 0;   // Return 0 to indicate successful execution
}
