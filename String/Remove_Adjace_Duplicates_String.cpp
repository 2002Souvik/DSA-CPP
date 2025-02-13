////Leetcode: 1047. Remove All Adjacent Duplicates In String
#include <iostream>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        // Initialize an empty string
        string ans = "";
        int n = s.length();

        for (int i = 0; i < n; i++) {
            char currChar = s[i];
            if (ans.empty()) { // If empty, push the character
                ans.push_back(s[i]);
            } else if (currChar == ans.back()) { // If rightmost char is equal, pop it
                ans.pop_back();
            } else {
                ans.push_back(currChar);
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter a string: "; //Input: s = "azxxzy" Output: "ay", Input: s = "abbaca" Output: "ca"
    cin >> input;

    string result = solution.removeDuplicates(input);
    cout << "Result after removing duplicates: " << result << endl;

    return 0;
}
