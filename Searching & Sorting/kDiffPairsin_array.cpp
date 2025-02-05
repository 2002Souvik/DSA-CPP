//// Leetcode: 532. K-diff Pairs in an Array
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {  //using two pointers
//         sort(nums.begin(), nums.end());
//         set<pair<int, int>> ans;
//         int i = 0, j = 1;
        
//         while (j < nums.size()) {
//             int diff = nums[j] - nums[i];
//             if (diff == k) {
//                 ans.insert({nums[i], nums[j]});
//                 i++, j++;
//             } else if (diff > k) {
//                 i++;
//             } else {
//                 j++;
//             }
            
//             // Prevent i and j from being the same element in the next iteration
//             if (i == j) {
//                 j++;
//             }
//         }
//         return ans.size();
//     }
// };

class Solution {
public:
    int bs(vector<int>&nums, int start, int x){ // using binary search
        int end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid] == x){
                return mid;
            }else if(x>nums[mid]){
                start = mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }


    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>>ans;

        for(int i=0; i<nums.size(); i++){
            if(bs(nums, i+1, nums[i]+k) != -1){
                ans.insert({nums[i], nums[i]+k});
            }
        }
        return ans.size();
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;
    
    // Call the function and print the result
    int result = solution.findPairs(nums, k);
    cout << "Number of unique k-diff pairs: " << result << endl;
    
    return 0;
}
