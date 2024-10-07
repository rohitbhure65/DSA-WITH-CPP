#include <iostream>
#include <cmath>
using namespace std;

int diffr(int n,int arr[], int num, int diff){
    int count = 0;
    for (int  i = 0; i < n; i++)
    {
        if (abs(num-arr[i]) <= diff)
        {
            count++;
        }
        
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    int diff;
    cin >> diff;

    cout << diffr(n,arr,num,diff);
    return 0;
}