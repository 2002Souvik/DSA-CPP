#include <iostream>
using namespace std;

void printDigits(int n) {
    // Base case
    if( n == 0) {
        return;
    }

    // Recursive call
    int newNumber = n / 10;
    printDigits(newNumber);

    // 1 case main solve krdeta hu
    int digit = n % 10;
    cout << digit << " ";
}

// interactive binary search - loop
int binarySearch(int arr[], int size, int target) {
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s <= e) {
        if (arr[mid] == target) {
            return mid; // Target found
        } else if (target > arr[mid]) {
            s = mid + 1; // Search in the right half
        } else {
            e = mid - 1; // Search in the left half
        }
        mid = (s + e) / 2; // Update mid
    }
    return -1; // Target not found
}

int binarySearchRecursive(int arr[], int size, int s, int e, int target) {
    // Base case
    if (s > e) {
        return -1; // Target not found
    }

    int mid = (s + e) / 2;

    // 1 case main
    if (arr[mid] == target) {
        return mid; // Target found
    }

    if (target > arr[mid]) {
        // Search in the right half
        return binarySearchRecursive(arr, size, mid + 1, e, target);
    } else {
        // Search in the left half
        return binarySearchRecursive(arr, size, s, mid - 1, target);
    }
    return -1; // Target not found
}

int main() {
    // int n = 21478;
    // printDigits(n);

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    int target = 60;
    int s = 0;
    int e = size - 1;
    // int ans = binarySearch(arr, size, target);
    int ans = binarySearchRecursive(arr, size, s, e, target);
    cout << "ansewr index: " << ans << endl;

    return 0;
}