#include <iostream>
using namespace std;

//  1 
//  0  1 
//  1  0  1 
//  0  1  0  1 
//  1  0  1  0  1 
//  0  1  0  1  0  1 
//  1  0  1  0  1  0  1 
//  0  1  0  1  0  1  0  1 
//  1  0  1  0  1  0  1  0  1 
//  0  1  0  1  0  1  0  1  0  1 

void zero_one_trangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int sum = i + j;
            if (sum % 2 == 0)
            {
                cout << " 1 ";
            }
            else
            {

                cout << " 0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << "Enter:  " << n << endl;

    zero_one_trangle(n);
    return 0;
}