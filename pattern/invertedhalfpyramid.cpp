#include <iostream>
using namespace std;

// * * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * 
// * * * * * * * 
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

void inverted_half_pyramid(int n){
    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }   
}

int main()
{
    int n;
    cin >> n;

    cout << "Enter:  " << n << endl;

    inverted_half_pyramid(n);
    return 0;
}