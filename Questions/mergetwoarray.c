#include<stdio.h>

void mergearray(int arr1[], int arr2[], int n1, int n2, int arr3[]){
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        arr3[count++] = arr1[i];
    }

    for (int j = 0; j < n2; j++)
    {
        arr3[count++] = arr2[j];
    }
}

int main(){
    int arr1[]= {1,2,3,4};
    int arr2[]= {5,6,7,8};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1 + n2];

    mergearray(arr1,arr2, n1, n2, arr3);
    
    for(int i = 0; i <= n1+n2; i++)
    {
        printf("%d", arr3[i]);
    }
    

    return 0;
}