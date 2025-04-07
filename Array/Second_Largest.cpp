#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function returns the second largest element
    int getSecondLargest(vector<int> &arr) {
        // Size of the array
        int n = arr.size();
        
        // If there are fewer than 2 elements, return -1
        if (n < 2) {
            return -1;
        }
        
        // Initialize first and second largest to minimum
        int first = INT_MIN;
        int second = INT_MIN;
        
        // Loop through the array to find the largest and second largest
        for (int i = 0; i < n; i++) {
            if (arr[i] > first) {
                second = first;  // Update second largest
                first = arr[i];  // Update first largest
            } 
            // Check if the element is greater than second and not equal to first
            else if (arr[i] > second && arr[i] != first) {
                second = arr[i];
            }
        }
        
        // If no second largest found, return -1
        if (second == INT_MIN) {
            return -1;
        }
        
        // Return second largest
        return second;
    }
};

int main() {
    Solution obj;
    
    // Test cases
    vector<int> arr1 = {10, 20, 4, 45, 99};
    cout << "Second Largest: " << obj.getSecondLargest(arr1) << endl;  // Output: 45

    // vector<int> arr2 = {5, 5, 5, 5};
    // cout << "Second Largest: " << obj.getSecondLargest(arr2) << endl;  // Output: -1

    // vector<int> arr3 = {1};
    // cout << "Second Largest: " << obj.getSecondLargest(arr3) << endl;  // Output: -1
    
    // vector<int> arr4 = {7, 7, 8, 8, 9};
    // cout << "Second Largest: " << obj.getSecondLargest(arr4) << endl;  // Output: 8
    
    return 0;
}
