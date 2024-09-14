#include <iostream>
using namespace std;

// * * * * * * 
// * * * * * * 
// * * * * * * 
// * * * * * * 

void solid_rectangle(int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
}

int main()
{
    int row;
    int col;
    cin >> row >> col;

    cout << "row " << row << endl;
    cout << "Coloum" << col << endl;

    solid_rectangle(row, col);

    return 0;
}