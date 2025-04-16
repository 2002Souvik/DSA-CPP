#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

void printAllOdds(int arr[], int size, int index, vector<int> &ans) {
    // Base case: if index is equal to size, return
    if (index == size) {
        return;
    }
    
    // Check if the current element is odd
    if (arr[index] % 2 != 0) {  // if( !(arr[index]&1) ) -- check if odd
        ans.push_back(arr[index]); // Add odd element to the answer vector
    }
    
    // Recursive call for the next index
    printAllOdds(arr, size, index + 1, ans);
}

void printAllEvens(int arr[], int size, int index){
    // Base case: if index is equal to size, return
    if (index == size) {
        return;
    }
    
    // Check if the current element is even
    if (!(arr[index]&1)) {  // if( arr[index] % 2 == 0 ) -- check if even
        cout << arr[index] << " "; // Print even element
    }
    
    // Recursive call for the next index
    printAllEvens(arr, size, index + 1);
}

void minInArray(int arr[], int size, int index, int &mini) {
    // Base case: if index is equal to size, return
    if(index == size) {
        return;
    }

    // case: if the current element is less than mini
    mini = min(mini, arr[index]); // Update the minimum value

    minInArray(arr, size, index + 1, mini); // Recursive call for the next index
}

void maxInArray(int arr[], int size, int index, int &maxi) {
    // Base case: if index is equal to size, return
    if(index == size) {
        return;
    }

    maxi = max(maxi, arr[index]);

    maxInArray(arr, size, index + 1, maxi); // Recursive call for the next index
}

bool searchInArray(int arr[], int size, int index, int target) {
    // Base case: if index is equal to size, return false
    if(index >= size) {
        return false; // Invalid index -> out of bounds of array
    }
    
    // Check if the current element is equal to the target
    if(arr[index] == target) {
        return true; // Found the target
    }
    
    // Recursive call for the next index
    return searchInArray(arr, size, index + 1, target); // Return the result of the recursive call
}

void printArray(int arr[], int size, int index) {
    // Base case: if index is equal to size, return
    if(index == size) {
        return;
    }
    
    cout << arr[index] << " "; // Print the current element
    
    // Recursive call for the next index
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = {10, 11, 12, 13, 14, 15, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    vector<int> ans;
    printAllOdds(arr, size, index, ans);

    // Print the odd elements stored in the answer vector
    for(auto num : ans){
        cout << num << " ";
    }

    cout << endl;
    printAllEvens(arr, size, index);
    cout << endl;

    int mini = INT_MAX; // Initialize mini to the maximum possible value
    minInArray(arr, size, index, mini);
    cout << "Minimum value in the array: " << mini << endl; // Print the minimum value

    int maxi = INT_MIN; // Initialize maxi to the minimum possible value
    maxInArray(arr, size, index, maxi);
    cout << "Maximum value in the array: " << maxi << endl; // Print the maximum value

    int target = 13;
    cout << searchInArray(arr, size, index, target) << endl; // Search for the target in the array

    cout << "Array elements: ";
    printArray(arr, size, index); // Print the array elements

    return 0;
}