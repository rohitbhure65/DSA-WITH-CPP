#include <iostream>
#include <vector> // Include the vector header for using std::vector
using namespace std;

int main()
{
    /////////// Declare vector /////////////

    // Create an empty vector and push elements into it
    vector<int> v;              // Declare an empty vector of integers
    v.push_back(1);             // Add element '1' at the end: v = {1}
    v.emplace_back(2);          // Add element '2' in place: v = {1, 2}
    v.pop_back();               // Remove the last element: v = {1}

    // Create a vector of pairs and push elements into it
    vector<pair<int, int>> vec; // Declare an empty vector of pairs
    vec.push_back({1, 2});      // Add pair (1, 2) using initializer list
    vec.emplace_back(1, 2);     // More efficient way to add (1, 2) using emplace_back()

    // Create a vector with 5 elements, each initialized to 100
    vector<int> v3(5, 100);     // v3 = {100, 100, 100, 100, 100}

    // Create a vector with 5 default-initialized (zero) elements
    vector<int> v4(5);          // v4 = {0, 0, 0, 0, 0}

    // Copy one vector into another
    vector<int> v1(5, 20);      // v1 = {20, 20, 20, 20, 20}
    vector<int> v2(v1);         // v2 is a copy of v1: v2 = {20, 20, 20, 20, 20}

    /////////// ITERATOR //////////
    vector<int>::iterator it = v.begin(); // Declare iterator pointing to the first element of v
    it++;                                 // Move the iterator to the second element
    cout << *(it) << " " << endl;         // Print the second element (which is '2' in this case)

    // Reverse iterators
    vector<int>::iterator it2 = v.end();                  // Points to one past the last element
    vector<int>::reverse_iterator it3 = v.rbegin();       // Points to the last element of v
    vector<int>::reverse_iterator it4 = v.rend();         // Points to one before the first element

    // Access elements with bounds checking
    cout << v[0] << " " << v.at(6) << endl;               // Access v[0], but at(6) may throw an out-of-bounds exception
    cout << v.back() << endl;                             // Print the last element of vector v

    /////////// Iterating over a vector ///////////
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";                             // Traditional iteration using iterators
    }
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";                             // Using auto for cleaner iterator declaration
    }
    cout << endl;

    for (auto it : v)
    {
        cout << it;                                       // Range-based for loop (C++11), prints all elements of v
    }
    cout << endl;

    ///////////// Deletion in Vector ///////////////

    // Example: v = {10,12,20,30}
    v.erase(v.begin() + 1);                               // Erase the element at index 1: v = {10, 20, 30}
    
    // Example: v = {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4);                // Erase elements from index 2 to 3: v = {12, 20, 35}

    /////////// Insert Function ////////////

    vector<int> v5(3, 100);           // v5 = {100, 100, 100}
    v5.insert(v5.begin(), 300);       // Insert 300 at the beginning: v5 = {300, 100, 100, 100}
    v5.insert(v5.begin() + 1, 2, 100);// Insert two 100s at index 1: v5 = {300, 100, 100, 100, 100}

    vector<int> copy(2, 50);                        // copy = {50, 50}
    v5.insert(v5.begin(), copy.begin(), copy.end());// Insert all elements of copy at the beginning of v5: v5 = {50, 50, 300, 100, 100, 100, 100}

    cout << v5.size();                              // Print the size of the vector v5

    v5.pop_back();                                  // Remove the last element
    v1.swap(v2);                                    // Swap the contents of v1 and v2

    v5.clear();                                     // Remove all elements from v5
    cout << v5.empty();                             // Check if the vector v5 is empty (returns 1 if empty, 0 otherwise)

    return 0;
}
