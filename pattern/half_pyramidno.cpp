#include <iostream>
using namespace std;

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 
// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 9 10 

void half_pyramid_number(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << "Enter:  " << n << endl;

    half_pyramid_number(n);
    return 0;
}