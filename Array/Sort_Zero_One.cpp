#include<bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[], int n){
    int ZeroCount = 0;
    int OneCount = 1;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            ZeroCount++;
        }
        if(arr[i] == 1){
            OneCount++;
        }
    }
    //insertion
    // fill(arr, arr+ZeroCount, 0);
    // fill(arr+ZeroCount, arr+n, 1);

    /// 2nd way
    for(int i = 0; i<ZeroCount; i++){
        arr[i] = 0;
    }
    for(int i = ZeroCount; i<n; i++){
        arr[i] = 1;
    }
}

int main(){
    int arr[] = {0, 1, 1, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortZeroOne(arr, size);

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}