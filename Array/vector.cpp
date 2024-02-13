#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Get Array element as a input
    for (int i = 1; i <= 5; i++)
        v.push_back(i);

    // Output of begin & end
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";

    printf("\n");

    // Output of rbegin & rend
    for (auto i = v.rbegin(); i != v.rend(); ++i)
        cout << *i << " ";

    printf("\n");

    // Output of cbegin & cend
    for (auto i = v.cbegin(); i != v.cend(); ++i)
        cout << *i << " ";

    printf("\n");

    // Output of crbegin & crend
    for (auto i = v.crbegin(); i != v.crend(); ++i)
        cout << *i << " ";

    return 0;
}