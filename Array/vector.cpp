#include <iostream>
#include <vector>
using namespace std;

int main()
{

    ////////////////// Iterators ////////////////

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

    ///////////////// Capacity //////////////////////
    vector<int> g1;

    for (auto i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }

    cout << "\nSize : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();

    // resizes the vector size to 4
    g1.resize(4);

    cout << "\nSize" << g1.size();

    // check if the vector is empty or not
    if (g1.empty() == false)
    {
        cout << "\nVector is not empty";
    }
    else
    {
        cout << "\nVector is Empty!";
    }

    // shrink the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are :";
    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }

    /////////////// Element access ///////////////////

    vector<int> g2;

    for (int i = 1; i <= 10; i++)
        g2.push_back(i * 10);

    cout << "\nReference operator [g] : g2[2] = " << g2[2];

    cout << "\nat : g2.at(4) = " << g2.at(4);

    cout << "\nfront() : g2.front() = " << g2.front();

    cout << "\nback() : g2.back() = " << g2.back();

    // pointer to the first element
    int *pos = g2.data();

    cout << "\nThe first element is : " << *pos;

    /////////////// Modifiers ///////////////////////

    vector<int> g3;
    g3.assign(5, 10);

    cout << "\nVector Elements are : ";
    for (int i = 0; i < g3.size(); i++)
    {
        cout << g3[i] << " ";
    }

    g3.push_back(14);
    int n = g3.size();
    cout << "\nThe last Element is : " << g3[n - 1];

    g3.pop_back();
    cout << "\nVector Elements are : ";
    for (int i = 0; i < g3.size(); i++)
    {
        cout << g3[i] << " ";
    }

    g3.insert(g3.begin(), 5);
    cout << "\nThe first Element is : " << g3[0];

    g3.erase(g3.begin());
    cout << "\nThe first Element is : " << g3[0];

    g3.emplace(g3.begin(), 6);
    cout << "\nThe first Element is : " << g3[0];

    g3.emplace_back(50);
    n = g3.size();
    cout << "\nThe last Element is : " << g3[n - 1];

    // erases the vector
    v.clear();
    cout << "\nVector size after clear(): " << v.size();

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    return 0;
}