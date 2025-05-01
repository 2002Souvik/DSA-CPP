#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // input array
    }

    // precompute: 
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q; // number of queries
    // query:
    while (q--) { 
        int number; // number to be searched
        cin >> number;
        // fetching:
        if (hash[number] > 0) {
            cout << number << " -> " << hash[number] << endl; // frequency of number
        }
    }
    return 0;
}
