#include <iostream>
#include <queue> // Include the queue header for using std::queue
using namespace std;

int main()
{
    // Create a queue of integers
    queue<int> q;

    // Add elements to the queue
    q.push(1);     // Queue now contains: 1
    q.push(2);     // Queue now contains: 1, 2
    q.emplace(4);  // Queue now contains: 1, 2, 4 - constructs the element in place

    // Modify the last element in the queue
    q.back() += 5; // Increment the last element (4) by 5, so it becomes 9
    // Now the queue contains: 1, 2, 9

    // Access and print the last element in the queue
    cout << "Back element: " << q.back() << endl;  // Output: Back element: 9

    // Access and print the front element in the queue
    cout << "Front element: " << q.front() << endl; // Output: Front element: 1

    // Remove the front element from the queue
    q.pop(); // Now the queue contains: 2, 9

    // Access and print the new front element
    cout << "New front element after pop: " << q.front() << endl; // Output: New front element after pop: 2

    // swap size empty same as stack
    return 0;
}