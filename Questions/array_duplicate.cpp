#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<int> duplicates(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> freq(n, 0);
        vector<int> result;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < n)
            {
                freq[arr[i]]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (freq[i] > 1)
            {
                result.push_back(i);
            }
        }

        if (result.empty())
        {
            return vector<int>{-1};
        }
        return result;
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> ans = obj.duplicates(arr);
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}