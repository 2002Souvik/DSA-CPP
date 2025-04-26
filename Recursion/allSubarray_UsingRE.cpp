#include <iostream>
#include <vector>
using namespace std;

int printSubarray_util(vector<int> &arr, int start, int end) {
    // Base case: if start index is greater than or equal to end index, return 0
    if(end == arr.size()) {
        return 0;
    }

    for(int i = start; i < end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //recursively call the function to print subarrays starting from the next index
    printSubarray_util(arr, start, end + 1);
}

void printSubarray(vector<int> &arr) {
    for(int start = 0; start < arr.size(); start++) {
        int end = start;
        printSubarray_util(arr, start, end);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    printSubarray(arr);
    return 0;
}