////Kth Smallest - GFG
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to find kth smallest element in the given array
    int kthSmallest(vector<int>& arr, int k) {
        int n = arr.size();
        
        // Step 1: Find the maximum element in the array
        int maxElem = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] > maxElem) {
                maxElem = arr[i];  
            }
        }
        
        // Step 2: Create a frequency array
        vector<int> fr(maxElem + 1, 0);  // Array to store frequency of each element
        
        // Step 3: Populate the frequency array
        for(int i = 0; i < n; i++) {
            int value = arr[i];
            fr[value] = fr[value] + 1;  // Increment the frequency of value
        }
        
        // Step 4: Find the kth smallest element
        int count = 0;
        for(int i = 0; i <= maxElem; i++) {
            if(fr[i] > 0) {
                count += fr[i];  // Add the frequency of value i to the count
                
                // If count exceeds or equals k, return the current value i
                if(count >= k) {
                    return i;  // This is the kth smallest element
                }
            }
        }
        
        return -1;  // If k is out of bounds (which shouldn't happen with valid inputs)
    }
};

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 4;  // find the 4th smallest element
    
    Solution sol;  // Create an object of the Solution class
    
    // Call the kthSmallest function and print the result
    cout << "The " << k << "th smallest element is: " << sol.kthSmallest(arr, k) << endl;
    
    return 0;
}
