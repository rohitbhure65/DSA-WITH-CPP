#include <iostream>
using namespace std;

// An iterative binary search function.
int binarysearch(int arr[], int size, int key)
{
    int l = 0;
    int r = size - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        // Check if x is present at mid
        if (arr[mid] == key)
            return mid;
        // If x greater, ignore left half
        else if (arr[mid] > key)
            r = mid - 1;
        // If x is smaller, ignore right half
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 6, 7, 9, 10, 33, 63, 66, 86};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int result = binarysearch(arr, size, key);
    if (result == -1)
        cout << "Key not present in arry";
    else
        cout << "key present in array at index : " << result;

    return 0;
}