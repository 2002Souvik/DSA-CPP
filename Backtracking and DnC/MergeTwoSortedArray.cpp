#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int mergeSortedArrays(int arr[], int sizeArr, int brr[], int sizeBrr, vector<int>& ans){
    int i = 0; // Pointer for arr
    int j = 0; // Pointer for brr

    // Traverse both arrays and merge them into ans
    while(i < sizeArr && j < sizeBrr) {
        if(arr[i] < brr[j]) {
            ans.push_back(arr[i]);
            i++;
        } else {
            ans.push_back(brr[j]);
            j++;
        }
    }

    // case 1: if arr is not empty and brr is empty
    while(i < sizeArr) {
        ans.push_back(arr[i]);
        i++;
    }

    // case 2: if brr is not empty and arr is empty
    while (j < sizeBrr) {
        ans.push_back(brr[j]);
        j++;
    }    
}

int main() {
    int arr[] = {10, 30, 50, 70};
    int sizeArr = 4;

    int brr[] = {20, 40, 60, 80, 90, 100};
    int sizeBrr = 6;

    vector<int> ans;

    mergeSortedArrays(arr, sizeArr, brr, sizeBrr, ans);

    for(int num : ans) {
        cout << num << " ";
    }
    

    return 0;
}
