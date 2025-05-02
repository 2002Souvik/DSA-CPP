#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int merge(int arr[], int s, int e, int mid) {
    int leftSize = mid - s + 1;
    int rightSize = e - mid;
    //create two temporary arrays
    int *leftArr = new int[leftSize]; // left array
    int *rightArr = new int[rightSize]; // right array

    //fill or copy the left arrays
    // copy original array -> values
    // original array ka starting index
    int index = s;
    // copying into left array 
    for(int i = 0; i < leftSize; i++) {
        leftArr[i] = arr[index++];
    }
    //copying into right array
    index = mid + 1;
    for(int i = 0; i < rightSize; i++) {
        rightArr[i] = arr[index++];
    }

    //marge logic
    int leftIndex = 0; // pointer for left array
    int rightIndex = 0; // pointer for right array
    int margeArrIndex = s; // pointer for original array

    while(leftIndex < leftSize && rightIndex < rightSize) {
        if(leftArr[leftIndex] < rightArr[rightIndex]) {
            arr[margeArrIndex++] = leftArr[leftIndex++];
        } else {
            arr[margeArrIndex++] = rightArr[rightIndex++];
        }
    }

    //// i have to handle the remaining elements of left array and right array

    while(leftIndex < leftSize) {
        arr[margeArrIndex++] = leftArr[leftIndex++];
    }
    
    while(rightIndex < rightSize) {
        arr[margeArrIndex++] = rightArr[rightIndex++];
    }

    // delete the temporary arrays
    delete [] leftArr; // free the memory allocated for left array
    delete [] rightArr; // free the memory allocated for right array
}

void mergeSort(int arr[], int s, int e) {
    //base case
    if(s >= e) {
        return;
    }

    int mid = (s + e) / 2;
    //left part of the array
    mergeSort(arr, s, mid);
    //right part of the array
    mergeSort(arr, mid + 1, e);
    //merge the two sorted arrays
    merge(arr, s, e, mid);
}

int main() {
    int arr[] = {10, 80, 110, 90, 50, 30, 40, 20};
    int size = 8;
    int s = 0;
    int e = size - 1;
    // print the original array
    cout << "before sorting the array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, s, e);
    // print the sorted array
    cout << "after sorting the array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
