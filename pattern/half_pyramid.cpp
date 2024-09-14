#include <iostream>
using namespace std;

//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  *  * 
//  *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  *  *  * 

void half_pyramid(int row){
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    
}

int main()
{
    int row;
    cin >> row;

    cout << "row " << row << endl;

    half_pyramid(row);
    return 0;
}