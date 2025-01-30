#include <iostream>
#include <utility> // For std::pair

using namespace std;

pair<int, int> checkTwoSum(int arr[], int n, int target) {
    // assuming -1,-1 as no answer found
    pair<int, int> ans = make_pair(-1, -1); 
    
    // Let's check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Avoid checking the same pair twice
            // Found a pair that sums to target
            if (arr[i] + arr[j] == target) {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    
    return ans;  // Return -1, -1 if no pair is found
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    pair<int, int> result = checkTwoSum(arr, n, target);

    if (result.first != -1 && result.second != -1) {
        cout << "Pair found: " << result.first << " and " << result.second << endl;
    } else {
        cout << "No pair found that sums to " << target << endl;
    }

    return 0;
}
