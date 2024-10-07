#include <iostream>
using namespace std;

void rotate_matrix(int a[4][4])
{
    // Transpose the matrix manually
    int temp[1][1];
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            // Manually swapping without using the swap function
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Reverse each row to complete the 90-degree rotation
    int temp1[1][1];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 / 2; j++)
        {
            // Manually swapping without using the swap function
            int temp1 = a[i][j];
            a[i][j] = a[i][4 - j - 1];
            a[i][4 - j - 1] = temp1;
        }
    }  

    cout << "Matrix after 90-degree rotation:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[4][4] = {{20, 10, 53, 35}, {23, 65, 53, 42}, {32, 53, 25, 53}, {53, 86, 53, 63}};

    cout << "Original matrix:" << endl;
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    rotate_matrix(a);

    return 0;
}
