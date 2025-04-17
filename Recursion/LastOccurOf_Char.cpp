#include <iostream>

using namespace std;

// Function to find the last occurrence of a character in a string using recursion
void lastOccLTR(string &s, char x, int i, int &ans){
    // Base case: if we reach the end of the string, return
    if(i >= s.size()){
        return;
    }

    // Check if the current character matches the target character
    if(s[i] == x) {
        ans = i; // Update the answer with the current index
    }

    // Recursive call to the next index
    lastOccLTR(s, x, i + 1, ans); // Move to the next index
}

void lastOccRTL(string &s, char x, int i, int &ans){
    // Base case: if we reach the end of the string, return
    if(i < 0){
        return;
    }

    // Check if the current character matches the target character
    if(s[i] == x) {
        ans = i; // Update the answer with the current index
        return; // No need to check further, we found the last occurrence
    }

    // Recursive call to the next index
    lastOccRTL(s, x, i - 1, ans); // Move to the next index
}

int main(){
    string s;
    cin >> s;
    char x;
    cin >> x;
    int  ans = -1;
    // lastOccLTR(s, x, 0, ans);
    lastOccRTL(s, x, s.size(), ans);
    cout << ans << endl;

    return 0;
}