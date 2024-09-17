#include <iostream>
using namespace std;

int main()
{
    // • Specifying Size
    int emp1[10];

    // • Initialization
    int emp2[] = {50, 40, 30, 20, 10};
    // find length of 2 methods
    int len1 = *(&emp2 + 1) - emp2;
    //*(&emp2 + 1) is the address of the next memory location
    // just after the last element of the array
    int len2 = sizeof(emp2)/sizeof(emp2[0]);

    cout << "Using pointer to find array length method 1 " << len1 << endl;
    cout << "Using method 2 " << len2 << endl;


    // • specifying size and initializing elements
    int emp3[7] = {50, 40, 30, 20, 10};

    // for loop
    for (int i = 0; i < sizeof(emp2) / sizeof(emp2[0]); i++)
    {
        cout << emp2[i] << endl;
    }

    cout << "-------------------------------------" << endl;

    // print using auto
    for (auto i : emp2)
    {
        cout << i << endl;
    }

    return 0;
}