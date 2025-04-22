#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Time Complexity: O(n), where n is the length of the string
// Space Complexity: O(n), due to the recursion stack

// Function to reverse a string using recursion
void reverseString(string &str, int start, int end) {
    // Base case: if start index is greater than or equal to end index, return
    if(start >= end) {
        return;
    }

    // Swap characters at start and end indices
    swap(str[start], str[end]);

    // Recursive call to reverse the remaining substring
    reverseString(str, start + 1, end - 1);
}

int main() {
    // Your code here
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Call the reverse function
    reverseString(str, 0, str.length() - 1);
    cout << "Reversed string: " << str << endl;
    return 0;
}