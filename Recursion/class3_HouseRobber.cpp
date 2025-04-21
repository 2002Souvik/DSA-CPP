#include <iostream>
#include <vector>
#include <algorithm> // for max
using namespace std;

class Solution {
public:
    int solve(vector<int>& nums, int n, int i) {
        // base case
        if (i >= n) {
            return 0;
        }
        // include current house
        int includeAns = nums[i] + solve(nums, n, i + 2); // include current house and skip next house
        // exclude current house
        int excludeAns = solve(nums, n, i + 1); // exclude current house and move to next house
        // store the maximum of both choices
        // return max of both choices
        return max(includeAns, excludeAns);
    }

    int rob(vector<int>& nums) {
        int index = 0;
        return solve(nums, nums.size(), index);
    }
};

int main() {
    Solution sol;
    vector<int> houses = {2, 7, 9, 3, 1};
    int maxLoot = sol.rob(houses);
    cout << "Maximum loot possible: " << maxLoot << endl;
    return 0;
}
