#include <iostream>
using namespace std;
const int MAX_SIZE = 100; // Maximum size of the array

// Function to insert an element at the end of the array
void insert(int arr[], int &size, int element)
{
    if (size < MAX_SIZE)
    {
        arr[size++] = element;
        cout << "Element inserted successfully.\n";
    }
    else
    {
        cout << "Array is full. Cannot insert element.\n";
    }
}

// Function to display all elements of the array
void display(const int arr[], int size)
{
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Function to search for an element in the array
int search(const int arr[], int size, int element)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == element)
        {
            return i; // Return index of the element if found
        }
    }
    return -1; // Return -1 if element not found
}

// Function to delete an element from the array
void remove(int arr[], int &size, int element)
{
    int index = search(arr, size, element);
    if (index != -1)
    {
        // Shift elements to the left to fill the gap
        for (int i = index; i < size - 1; ++i)
        {
            arr[i] = arr[i + 1];
        }
        size--; // Reduce the size of the array
        cout << "Element removed successfully.\n";
    }
    else
    {
        cout << "Element not found in the array.\n";
    }
}

int main()
{
    int arr[MAX_SIZE];
    int size = 0;
    insert(arr, size, 5);
    insert(arr, size, 10);
    insert(arr, size, 15);
    display(arr, size);                                       // Output: Array elements: 5 10 15
    cout << "Index of 10: " << search(arr, size, 10) << "\n"; // Output: Index of 10: 1
    remove(arr, size, 10);
    display(arr, size); // Output: Array elements: 5 15
    return 0;
}