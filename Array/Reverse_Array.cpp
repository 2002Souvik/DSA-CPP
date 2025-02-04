#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int n){

    //// Using a temporary array – O(n) Time and O(n) Space
    // vector<int> temp(n);

    // for(int i = 0; i<n; i++) {
    //     temp[i] = arr[n-i-1];
    // }

    // for(int i = 0; i < n; i++) {
    //     arr[i] = temp[i];
    // }

    //// Using Two Pointers – O(n) Time and O(1) Space
    // int l = 0, h = n-1;
    // while (l<h) {
    //     swap(arr[l], arr[h]);
    //     l++;
    //     h--;
    // }

    //// Swapping Elements – O(n) Time and O(1) Space
    for(int i = 0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }

    //// Using Inbuilt Methods – O(n) Time and O(1) Space
    // reverse(arr.begin(), arr.end());

    //// XOR Method
    // int l = 0, h = n-1;
    // while(l<h){
    //     // swap(arr[l], arr[h]);
    //     arr[l] = arr[l] ^ arr[h];
    //     arr[h] = arr[h] ^ arr[l];
    //     arr[l] = arr[l] ^ arr[h];
    //     l++;
    //     h--;
    // }
    
}

int main(){
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    ////M1: Custom reversialusing 2-pointer approach
    reverseArray(arr, n);

    ////M2: STL, C++ lib
    // reverse(arr, arr + n);

    for(int i =0 ; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}