#include <iostream>
using namespace std;

//  *  *  *  *  *  *  * 
//  *                 * 
//  *                 * 
//  *                 * 
//  *  *  *  *  *  *  * 

void hollow_rectangle(int row, int col){
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j==1 || i==1 || i == row || j == col)
            {
                cout << " * ";
            }else{
                cout << "   ";
            }
            
        }
        cout << endl;
        
    }
    
}

int main(){
    int row;
    int col;
    cin >> row >> col;

    cout << "row " << row << endl;
    cout << "Coloum " << col << endl;

    hollow_rectangle(row, col);
    return 0;
}