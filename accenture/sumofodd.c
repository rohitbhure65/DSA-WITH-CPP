#include<stdio.h>

int sumofodd(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(arr[i]%2!=0){
            sum += arr[i];
        }
    }
    return sum;
}

int main(){
    int arr[] = {1,2,5,7,10,12,11,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",sumofodd(arr, size));
    return 0;
}