#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to print all subsequences of a string using recursion
void printSubsequences(string str, int i, string output, vector<string> &ans) {
    // Base case: if we reach the end of the string, add the output to the answer vector
    if(i == str.length()) {
        ans.push_back(output); // Add the current subsequence to the answer vector
        return; // Return to the previous call
    }

    // Include the current character in the subsequence
    char ch = str[i]; // Get the current character

    // Recursive call to include the character
    printSubsequences(str, i+1, output + ch, ans); // Include the character in the output
    // Recursive call to exclude the character
    printSubsequences(str, i+1, output, ans); // Exclude the character from the output
    // The function will explore both possibilities: including and excluding the character
}

int main() {
    string str = "abc";
    string output = "";
    vector<string> ans;
    int index = 0; // Starting index for recursion

    // Call the function to print all subsequences
    printSubsequences(str, index, output, ans);

    cout << "All Subsequences:" << endl;
    cout <<  ans.size() << endl; // Print the number of subsequences
    for(auto it : ans) {
        cout << it << endl; // Print each subsequence 
    }

    return 0;
}