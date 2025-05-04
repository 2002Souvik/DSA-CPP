#include <iostream>
using namespace std;

// Function to sort an array using quick sort algorithm.
void quickSort(int a[], int start, int end) {
    if (start >= end) return; // Base case: if the array has one or no elements, it's already sorted.
    // Choose the last element as the pivot
    int pivot = end; // Pivot index
    int i = start - 1; // Pointer for the smaller element
    int j = start; // Pointer for the current element

    while (j < pivot) { 
        if (a[j] < a[pivot]) { // If the current element is smaller than the pivot
            ++i; 
            swap(a[i], a[j]); // Swap the current element with the smaller element pointer
        }
        ++j;
    }
    ++i; // i is the right position for the pivot element
    swap(a[i], a[pivot]); // Swap the pivot element with the element at the smaller element pointer
    // Now, the pivot is in its correct position, and all elements to the left are smaller than the pivot

    quickSort(a, start, i - 1); // Recursively sort the left part of the array
    quickSort(a, i + 1, end); // Recursively sort the right part of the array
}

// Main function to test quickSort
int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
