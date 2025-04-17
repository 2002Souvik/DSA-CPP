#include <iostream>
#include <vector>
using namespace std;

class Solution {
public: 
    // Function to perform selection sort on an array
    // Time Complexity: O(n^2) where n is the number of elements in the array
    vector<int> selectionSort(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size - 1; i++) {
            int mini = i;
            for (int j = i + 1; j < size; j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }
            // swap(nums[i], nums[mini]); // Swap the found minimum element with the first element of the unsorted part
            // Swap nums[i] and nums[mini]
            int temp = nums[i]; 
            nums[i] = nums[mini];
            nums[mini] = temp;
        }
        return nums;
    }

    void printArray(const vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    Solution sol;

    cout << "Original array: ";
    sol.printArray(arr);

    vector<int> sortedArr = sol.selectionSort(arr);

    cout << "Sorted array: ";
    sol.printArray(sortedArr);

    return 0;
}
