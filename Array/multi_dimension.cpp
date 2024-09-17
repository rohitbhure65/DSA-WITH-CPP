#include <iostream>
using namespace std;

int main()
{
    // Corrected to 3 rows and 2 columns
    int arr[3][2] = {{100, 200}, {300, 400}, {500, 600}};
    
    // Loop over rows
    for (int i = 0; i < 3; i++) // There are 3 rows
    {
        // Loop over columns
        for (int j = 0; j < 2; j++) // There are 2 columns
        {
            // Print each element
            cout << arr[i][j] << endl; // Use [i][j] to access row i, column j
        }
    }

    return 0;
}
