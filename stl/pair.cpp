#include <iostream>
using namespace std;

// Main function to demonstrate the use of pairs in C++
int main()
{
    // Creating a pair of two integers
    pair<int, int> p = {1, 2};
    // Accessing and printing the first and second elements of the pair
    cout << p.first << " " << p.second << endl; // Output: 1 2

    // Creating an empty pair and assigning values to its elements
    pair<int, int> pa;
    pa.first = 2;  // Assigning a value to the first element
    // Printing the first element of the pair
    cout << pa.first << endl; // Output: 2

    // Creating a nested pair (a pair inside another pair)
    pair<int, pair<int, int>> pr = {1, {3, 4}};
    // Accessing and printing the second element of the inner pair
    cout << pr.second.second << endl; // Output: 4

    // Creating an array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    // Accessing and printing the second element of the second pair in the array
    cout<< arr[1].second << endl; // Output: 4

    return 0;
}
