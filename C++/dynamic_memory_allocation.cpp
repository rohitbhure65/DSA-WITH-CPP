#include <iostream>
#include <cstdlib> // For malloc, realloc, calloc, free

using namespace std;

int main() {
    int i, n;

    cout << "Enter the number of integers: " << endl;
    cin >> n;

    // Allocate memory for n integers using malloc
    int *ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        cout << "MEMORY NOT ALLOCATED" << endl;
        exit(1);
    }

    // Initialize the allocated memory with zero using calloc
    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        cout << "MEMORY NOT ALLOCATED" << endl;
        exit(1);
    }

    // Input values
    for (i = 0; i < n; i++) {
        cout << "Enter integer value: ";
        cin >> *(ptr + i);
    }

    // Output values
    cout << "Entered values are: ";
    for (i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // Reallocate memory if needed
    int newSize;
    cout << "Enter new size for reallocation: ";
    cin >> newSize;

    ptr = (int*)realloc(ptr, newSize * sizeof(int));

    if (ptr == NULL) {
        cout << "MEMORY NOT RE-ALLOCATED" << endl;
        exit(1);
    }

    // If realloc reduces size, we need to initialize new elements
    if (newSize > n) {
        for (i = n; i < newSize; i++) {
            *(ptr + i) = 0; // Initialize new elements
        }
    }

    // Output new values
    cout << "Values after reallocation: ";
    for (i = 0; i < newSize; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // Free the allocated memory
    free(ptr);

    return 0;
}