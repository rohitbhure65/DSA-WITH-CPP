#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5, 8, 4, 2, 35, 9, 23, 64, 2, 62};
    int size = sizeof(arr) / sizeof(arr[0]); // size of array
    int key;
    cin >> key;
    int postition = linearSearch(arr, size, key);
    if (postition == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << postition;
    }
    return 0;
}