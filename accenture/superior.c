#include<stdio.h>
#include<limits.h>

int sup(int arr[], int size){
    int sup = INT_MAX;
    int counter = 0;
        // Loop to compare each element with the minimum encountered so far
    for(int i = size-1; i > 0; i--){ 
        if(arr[i] > sup){
            counter++;
        }
        // Update the minimum element
        if(arr[i] <= sup){
            sup = arr[i];
        }
    }
    return counter;
}

int main(){
    int arr[] = {7,9,5,2,8,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d\n", sup(arr, size));  // This will print the count of updates
    return 0;
}
