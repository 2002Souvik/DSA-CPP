#include <iostream>
using namespace std;

bool isPalindrome(string &str, int strt, int end) {
    // Base case: if start index is greater than or equal to end index, return true
    if(strt >= end) {
        return true;
    }

    // Check if the string is empty or has only one character
    if(str[strt] != str[end]){
        return false;
    }
    return isPalindrome(str, strt + 1, end - 1);
}

int main() {
    // Your code here
    string str;
    cin >> str;
    // string str = "madam"; // Example string
    // string str = "hello"; // Example string
    cout << "Original string: " << str << endl;
    cout << isPalindrome(str, 0, str.length() - 1) << endl;
    return 0;
}