#include <iostream>
#include <stack> // Include the stack header for using std::stack
using namespace std;

int main()
{
    // Create a stack of integers
    stack<int> st;

    // Push elements onto the stack
    st.push(1); // Stack now contains: 1
    st.push(2); // Stack now contains: 1, 2
    st.push(3); // Stack now contains: 1, 2, 3
    st.push(4); // Stack now contains: 1, 2, 3, 4

    // Access the top element of the stack
    cout << "Top element: " << st.top() << endl; // Output: Top element: 4

    // Remove the top element
    st.pop(); // Stack now contains: 1, 2, 3

    // Access the new top element after popping
    cout << "New top element: " << st.top() << endl; // Output: New top element: 3

    // Print the size of the stack
    cout << "Size of stack: " << st.size() << endl; // Output: Size of stack: 3

    // Check if the stack is empty
    cout << "Is the stack empty? " << (st.empty() ? "Yes" : "No") << endl; // Output: Is the stack empty? No

    // Create another stack to demonstrate swap
    stack<int> st1;

    // Push some elements into the second stack
    st1.push(5); // Stack st1 now contains: 5
    st1.push(6); // Stack st1 now contains: 5, 6

    // Swap the contents of st and st1
    st.swap(st1); // Now st contains: 5, 6 and st1 contains: 1, 2, 3

    // Print the top elements after the swap
    cout << "Top of st after swap: " << st.top() << endl;   // Output: Top of st after swap: 6
    cout << "Top of st1 after swap: " << st1.top() << endl; // Output: Top of st1 after swap: 3

    return 0;
}
