#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input size of the array
    int n;
    cin >> n;

    int arr[n];
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute frequencies using a map
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Query phase
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // Fetch and print the frequency
        cout << number << " -> " << mp[number] << endl;
    }

    return 0;
}
