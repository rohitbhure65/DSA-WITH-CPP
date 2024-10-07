#include <bits/stdc++.h>
using namespace std;

void dominant_element(int *arr, int n)
{
    int freq[n + 1] = {0};
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int secondMaxFreq = 0;

    for (int i = 1; i <= n; i++)
        if(freq[i] > maxFreq){
            secondMaxFreq = maxFreq;
            maxFreq = freq[i];
        }else if(freq[i] > secondMaxFreq){
            secondMaxFreq = freq[i];
        }

    if(maxFreq > secondMaxFreq){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        dominant_element(arr, n);
    }

    return 0;
}
