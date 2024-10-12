#include <iostream>
#include <deque> // Include the deque header for using std::deque
using namespace std;

int main()
{
    // Create a deque of integers
    deque<int> dq;

    // Add elements to the back of the deque
    dq.push_back(1);    // {1}
    dq.emplace_back(2); // {1, 2} - constructs the element in place
    dq.push_front(4);   // {4, 1, 2} - adds element to the front
    dq.push_back(3);    // {4, 1, 2, 3} - adds element to the back

    // Remove elements from the back and front of the deque
    dq.pop_back();      // Removes '3', now dq = {4, 1, 2}
    dq.pop_front();     // Removes '4', now dq = {1, 2}

    // Access the last and first elements
    int lastElement = dq.back();   // lastElement = 2
    int firstElement = dq.front();  // firstElement = 1

    // Print the accessed elements
    cout << "First Element: " << firstElement << endl;   // Output: First Element: 1
    cout << "Last Element: " << lastElement << endl;     // Output: Last Element: 2

    // The rest of the functions are similar to vector:
    // begin: Returns an iterator to the first element
    // end: Returns an iterator to one past the last element
    // rbegin: Returns a reverse iterator to the last element
    // rend: Returns a reverse iterator to one before the first element
    // clear: Removes all elements from the deque
    // insert: Inserts elements at a specific position
    // size: Returns the number of elements in the deque
    // swap: Swaps the contents of two deques

    // Example usage of some of these functions
    cout << "Size of deque: " << dq.size() << endl;      // Output: Size of deque: 2

    // Clear the deque
    dq.clear();                                           // Remove all elements
    cout << "Size of deque after clear: " << dq.size(); // Output: Size of deque after clear: 0

    return 0;
}
