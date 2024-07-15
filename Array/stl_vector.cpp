// reference: https://www.geeksforgeeks.org/vector-in-cpp-stl/

// Vector in C++ STL
// Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

// What is std::vector in C++?
// std::vector in C++ is the class template that contains the vector container and its member functions. It is defined inside the <vector> header file. The member functions of std::vector class provide various functionalities to vector containers. Some commonly used member functions are written below:

// Iterators
// begin() – Returns an iterator pointing to the first element in the vector
// end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
// rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
// cbegin() – Returns a constant iterator pointing to the first element in the vector.
// cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
// crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

// size() – Returns the number of elements in the vector.
// max_size() – Returns the maximum number of elements that the vector can hold.
// capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
// resize(n) – Resizes the container so that it contains ‘n’ elements.
// empty() – Returns whether the container is empty.
// shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
// reserve() – Requests that the vector capacity be at least enough to contain n elements.
   
// Element access
// reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
// at(g) – Returns a reference to the element at position ‘g’ in the vector
// front() – Returns a reference to the first element in the vector
// back() – Returns a reference to the last element in the vector
// data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

// Modifiers
// assign() – It assigns new value to the vector elements by replacing old ones
// push_back() – It push the elements into a vector from the back
// pop_back() – It is used to pop or remove elements from a vector from the back.
// insert() – It inserts new elements before the element at the specified position
// erase() – It is used to remove elements from a container from the specified position or range.
// swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
// clear() – It is used to remove all the elements of the vector container
// emplace() – It extends the container by inserting new element at position
// emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

// The time complexity for doing various operations on vectors is-

// Random access – constant O(1)
// Insertion or removal of elements at the end – constant O(1)
// Insertion or removal of elements – linear in the distance to the end of the vector O(N)
// Knowing the size – constant O(1)
// Resizing the vector- Linear O(N)
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