#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    // precompute:
    int hash[26] = {0}; // Only for lowercase letters 'a' to 'z'
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch and print in required format
        if (hash[c - 'a'] > 0) {
            cout << c << " -> " << hash[c - 'a'] << endl;
        }
    }
    return 0;
}
