#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int l = 0, h = n-1;
    // while(l < h){
    //     swap(arr[l], arr[h]);
    //     l++;
    //     h--;
    // }

    //// Pro code
    // while (l<h)
    // {
    //     swap(arr[l], arr[h]);
    //     l++;
    //     h--;
    // }

    //// XOR Method
    while(l<h){
        // swap(arr[l], arr[h]);
        arr[l] = arr[l] ^ arr[h];
        arr[h] = arr[h] ^ arr[l];
        arr[l] = arr[l] ^ arr[h];
        l++;
        h--;
    }
    
}

int main(){
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    ////M1: Custom reversialusing 2-pointer approach
    // reverseArray(arr, n);

    ////M2: STL, C++ lib
    reverse(arr, arr + n);

    for(int i =0 ; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}