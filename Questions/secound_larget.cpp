#include <iostream>
#include <vector>
using namespace std;

void secoud_test(vector<int> &v, int n)
{
    if (n == 0)
        return;

    int max = v[0];
    int min = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
        else
        {
            min = max;
        }
    }
    cout << min;
}

int main()
{
    vector<int> v = {1, 3, 5, 6, 3, 7, 73, 33};
    int len = v.size();

    secoud_test(v, len);

    return 0;
}
