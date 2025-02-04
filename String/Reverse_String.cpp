#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    string reverseString(string& s) {
        int l = 0;
        int h = s.size() - 1;
        while (l < h) {
            swap(s[l], s[h]);
            l++;
            h--;
        }
        return s;
    }
};

int main() {
    Solution solution;
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;
    string reversedStr = solution.reverseString(str);
    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}
