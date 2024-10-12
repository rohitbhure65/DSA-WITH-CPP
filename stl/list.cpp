#include <iostream>
#include <list> // Include the list header for using std::list
using namespace std;

int main()
{
    // Yes, in C++, the STL (Standard Template Library) list is implemented as a doubly linked list.
    
    // Create a list of integers
    list<int> ls;

    // Add elements to the back of the list
    ls.push_back(2);    // List now contains {2}
    ls.emplace_back(4); // List now contains {2, 4} - constructs the element in place

    // Add elements to the front of the list
    ls.push_front(5);   // List now contains {5, 2, 4}
    // Emplace front does not specify any value, so it will not add anything to the list
    // ls.emplace_front(); // This line should be removed or corrected

    // Print the elements of the list
    cout << "Current elements in the list: ";
    for (const auto& element : ls) {
        cout << element << " "; // Output: 5 2 4
    }
    cout << endl;

    // Other functions that are similar to vector:
    // begin: Returns an iterator to the first element
    // end: Returns an iterator to one past the last element
    // rbegin: Returns a reverse iterator to the last element
    // rend: Returns a reverse iterator to one before the first element
    // clear: Removes all elements from the list
    // insert: Inserts elements at a specific position
    // size: Returns the number of elements in the list
    // swap: Swaps the contents of two lists

    // Example usage of some of these functions
    cout << "Size of list: " << ls.size() << endl; // Output: Size of list: 3

    // Clear the list
    ls.clear(); // Remove all elements
    cout << "Size of list after clear: " << ls.size() << endl; // Output: Size of list after clear: 0

    return 0;
}
