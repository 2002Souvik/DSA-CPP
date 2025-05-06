#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void countFrequency(string str) {
    unordered_map<char, int> freq;
    string order = "";

    // Count frequency and maintain order
    for (char ch : str) {
        if (freq.find(ch) == freq.end()) {
            order += ch;
        }
        freq[ch]++;
    }

    // Print characters with their frequency
    for (char ch : order) {
        cout << ch << freq[ch] << " ";
    }
}

int main() {
    string input;
    cin >> input; // Read input string from user
    // Example: "aabbcc" -> "a2 b2 c2"
    countFrequency(input); // Call function
    return 0;
}
