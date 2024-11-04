#include <bits/stdc++.h>
using namespace std;

void differce(vector<int> &arr, int target)
{
    pair<int, int> p;
    int found = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (abs(arr[i] + arr[j]) == target || abs(arr[i] - arr[j]) == target)
            {
                p.first = arr[i];
                p.second = arr[j];
                found++;
                break;
            }
        }
    }
    if (found > 0)
    {
        cout << "pair found: (" << p.first << "," << p.second << ")";
    }
    else
    {
        cout << "No such pair found";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    differce(arr, target);
    return 0;
}
