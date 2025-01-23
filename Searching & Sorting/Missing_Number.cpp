////268. Missing Number
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// int sortingMethod(vector<int>& nums){
//     ////T.C: O(nlogn) S.C: O(1)
//     sort(nums.begin(), nums.end());
//         for(int i = 0; i<nums.size(); i++){
//             if(i == nums[i]){
//                 continue;
//             }else{
//                 return i;
//             }
//         }
//     return nums.size();
// }

// int xorMethod(vector<int>& nums){
//     ////T.C: O(nlogn) S.C: O(1)
//     int ans=0;
//     for(int i = 0; i<nums.size(); i++){
//           ans ^= nums[i];
//     }

//     int n = nums.size();
//     for(int i = 0; i<=n; i++){
//           ans ^= i;
//     }
//     return ans;
// }

// int missingNumber(vector<int>& nums) {
//     return xorMethod(nums);
// }

//// Using Binary Search
int missingNumber(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int ansIndex = -1;
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int number = arr[mid];
        int index = mid;
        int diff = number - index;
        if (diff == 0)
        {
            // ans inn right
            s = mid + 1;
        }
        else if (diff != 0)
        {
            // store and compute
            ansIndex = index;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    if (ansIndex == -1)
    {
        return n;
    }
    return ansIndex;
}

int main()
{
    vector<int> nums = {3, 0, 1}; // Example input array
    int result = missingNumber(nums); // Call function to find the missing number
    cout << "The missing number is: " << result << endl; // Output the result
    return 0;
}