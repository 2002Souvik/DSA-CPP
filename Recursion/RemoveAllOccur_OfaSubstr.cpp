#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string full, string pattern) {
        // jab tak full string k andar pattern string
        // milti rahagi, tab tak loop chalao
        while(full.find(pattern) != string::npos) {
            //full string me se erase karo
            //erase function k 2 argument hai
            //first argument me, pattern ka starting index dena hai
            //full.find(pattern), hume starting index of pattern inside
            //full string provide krra hau
            //2nd argument, usme specifi karne hai, k kitne character
            //remove karna chahte ho, string index se
            full.erase(full.find(pattern), pattern.length());
        }
        return full;
    }
};

int main() {
    // Easy Steps:

    // 1. User se input lo
    string full, pattern;

    // cout << "Enter the full string: ";
    // cin >> full;

    full = "daabcbaabcbc";

    // cout << "Enter the pattern to remove: ";
    // cin >> pattern;

    pattern = "abc";

    // 2. Solution class ka object banao
    Solution sol;

    // 3. Function call karo aur answer store karo
    string result = sol.removeOccurrences(full, pattern);

    // 4. Final output print karo
    cout << "String after removing all occurrences of pattern: " << result << endl;

    return 0;
}
