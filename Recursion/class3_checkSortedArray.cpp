#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(int arr[], int n, int index) {
    // Base case: if index is equal to n-1, return true
    if(index == n-1) {
        return true; // Single element array is considered sorted
    }

    bool currAns = false;
    bool recursionKaAns = false;
    // Check if the current element is less than the next element
    if(arr[index + 1] > arr[index]) {
        currAns = true; // Current element is less than the next element
    }

    // Recursive call for the next index
    recursionKaAns = checkSorted(arr, n, index + 1); // Check the rest of the array

    return (currAns && recursionKaAns); // Return true if both conditions are satisfied OR
    // if(currAns == true && recursionKaAns == true)
    //     return true; // Array is sorted
    // else
    //     return false; // Array is not sorted
}

int main() {
    int arr[] = {10, 20, 300, 40, 50};
    int size = 4;
    int index = 0;
    bool ans = checkSorted(arr, size, index);
    cout << "Is the array sorted? " << (ans ? "Yes" : "No") << endl;

    return 0;
}