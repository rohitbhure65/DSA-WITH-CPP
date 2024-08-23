#include<stdio.h>

// Function to reverse the array using a swap function
void reverse_array(int arr[], int size){
    int temp;
    printf("Reverse array using swap function\n");
    for(int i = 0, j = size - 1; i <= j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// Function to reverse the array using recursion
void reverse_array_recurrsion(int arr[], int start, int end){
    int temp;
    if(start >= end) // Base case for recursion
        return;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse_array_recurrsion(arr, start + 1, end - 1); // Recursive call
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Print original array
    printf("Original array: ");
    for(int i = 0; i < size; i++){
        printf("%d->", arr[i]);
    }
    printf("NULL\n");

    // Reverse the array using swap function
    reverse_array(arr, size);
    printf("Reversed array using swap function: ");
    for(int i = 0; i < size; i++){
        printf("%d->", arr[i]);
    }
    printf("NULL\n");

    // Reverse the array using recursion
    reverse_array_recurrsion(arr, 0, size - 1);
    printf("Reversed array using recursion: ");
    for(int i = 0; i < size; i++){
        printf("%d->", arr[i]);
    }
    printf("NULL\n");

    return 0;
}