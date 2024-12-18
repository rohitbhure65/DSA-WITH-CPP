#include <iostream>
#include <vector>
using namespace std;

// Sum of odd-indexed numbers
int sumofodd(const vector<int>& arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i += 2) { // Start at index 1 for odd indices
        sum += arr[i];
    }
    return sum;
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    vector<int> arr = {1, 2, 4, 5, 6, 7};
    int n = arr.size();
    cout << sumofodd(arr, n);
    
    return 0;
}
