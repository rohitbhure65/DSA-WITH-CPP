#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create three maps: 
    // mpp1 maps integers to integers
    // mpp2 maps integers to pairs of integers (not used in the code)
    // mpp3 maps pairs of integers to integers
    map<int, int> mpp1;
    map<int, pair<int, int>> mpp2; // Not used
    map<pair<int, int>, int> mpp3;

    // Insert values into mpp1
    mpp1[1] = 2;              // Insert (1, 2)
    mpp1.emplace(3, 1);      // Insert (3, 1)
    mpp1.insert({2, 4});     // Insert (2, 4)

    // Insert value into mpp3
    mpp3[{2, 3}] = 10;        // Insert ((2, 3), 10)

    // Print contents of mpp1
    cout << "Contents of mpp1:" << endl;
    for (auto it : mpp1)
    {
        cout << it.first << " " << it.second << endl;
    }

    // Print contents of mpp3
    cout << "Contents of mpp3:" << endl;
    for (auto it : mpp3)
    {
        cout << "(" << it.first.first << ", " << it.first.second << ") " << it.second << endl;
    }

    // Access elements in mpp1
    cout << mpp1[1] << endl; // Outputs: 2
    cout << mpp1[3] << endl; // Outputs: 1 (corrected from 0)

    // Find and dereference the iterator
    auto it = mpp1.find(1);
    if (it != mpp1.end()) {
        cout << it->second << endl; // Outputs: 2
    } else {
        cout << "Key 1 not found." << endl;
    }

    // Attempt to find a non-existent key (4)
    it = mpp1.find(4);
    if (it != mpp1.end()) {
        cout << it->second << endl; // Won't execute
    } else {
        cout << "Key 4 not found." << endl; // Outputs this
    }

    // Lower bound and upper bound operations
    auto lower = mpp1.lower_bound(2); // First element not less than 2
    auto upper = mpp1.upper_bound(2); // First element greater than 2

    if (lower != mpp1.end()) {
        cout << "Lower bound for 2: (" << lower->first << ", " << lower->second << ")" << endl;
    } else {
        cout << "No lower bound for 2." << endl;
    }

    if (upper != mpp1.end()) {
        cout << "Upper bound for 2: (" << upper->first << ", " << upper->second << ")" << endl;
    } else {
        cout << "No upper bound for 2." << endl;
    }

    // Additional map operations: erase, swap, size, and empty can be demonstrated if needed
    return 0;
}
