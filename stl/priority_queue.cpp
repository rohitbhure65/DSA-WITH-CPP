#include <bits/stdc++.h> // Include all standard libraries
using namespace std;

int main()
{
    // Create a max heap using priority_queue (default behavior)
    priority_queue<int> pq;

    // Add elements to the max heap
    pq.push(1);    // Heap now contains: 1
    pq.push(77);   // Heap now contains: 77, 1
    pq.push(4);    // Heap now contains: 77, 1, 4
    pq.push(3);    // Heap now contains: 77, 3, 4, 1

    // Access and print the largest element (top of the max heap)
    cout << "Top element of max heap: " << pq.top() << endl; // Output: Top element of max heap: 77

    // Remove the top element
    pq.pop(); // Removes 77
    cout << "New top element of max heap after pop: " << pq.top() << endl; // Output: New top element of max heap after pop: 4

    // The size, swap, and empty functions work similarly to other STL containers
    cout << "Size of max heap: " << pq.size() << endl; // Output: Size of max heap: 3
    cout << "Is max heap empty? " << (pq.empty() ? "Yes" : "No") << endl; // Output: Is max heap empty? No

    // Create a min heap using priority_queue
    priority_queue<int, vector<int>, greater<int>> pqm;

    // Add elements to the min heap
    pqm.push(5);   // Heap now contains: 5
    pqm.push(2);   // Heap now contains: 2, 5
    pqm.push(8);   // Heap now contains: 2, 5, 8
    pqm.push(10);  // Heap now contains: 2, 5, 8, 10

    // Access and print the smallest element (top of the min heap)
    cout << "Top element of min heap: " << pqm.top() << endl; // Output: Top element of min heap: 2

    return 0;
}