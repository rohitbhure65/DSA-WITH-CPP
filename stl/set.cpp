#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a set of integers (automatically sorted and unique)
    set<int> st;

    // Inserting elements into the set
    st.insert(1);  // {1}
    st.emplace(1); // Duplicate element, won't change the set: {1}
    st.insert(2);  // {1, 2}
    st.insert(3);  // {1, 2, 3}
    st.insert(4);  // {1, 2, 3, 4}

    // Demonstrating functionality similar to vector for insert
    // While vector allows duplicates and doesn't sort, set only keeps unique elements
    // Functions like begin(), end(), rbegin(), rend(), size(), empty(), and swap() work the same as with other STL containers

    // {1,2,3,4,5}
    auto it = st.find(3); // pointing iterator 3

    // {1,2,3,4,5}
    auto it = st.find(6); // pointing iterator st.end
                          // because 6 is not present

    // Remove the element at index 5, resulting in the set {1, 2, 3, 4}
    st.erase(5); // {1, 2, 3, 4}

    // Count occurrences of the element '1' in the set
    int cnt = st.count(1);

    // Find the iterator pointing to the element '3' and erase it
    auto it = st.find(3);
    st.erase(it); // Set after erase: {1, 2, 4, 5}

    // Find iterators for the range to erase from '2' to '4'
    auto it1 = st.find(2);
    auto it2 = st.find(4);

    // Erase elements in the range [it1, it2), resulting in the set {1, 4, 5}
    st.erase(it1, it2); // After erase: {1, 4, 5}

    // Note: lower_bound and upper_bound work similarly as in vectors
    auto lb = st.lower_bound(2); // Finds the first element not less than '2'
    auto ub = st.upper_bound(2); // Finds the first element greater than '2'

    return 0;
}