#include<bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
    cout << endl;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    printAllPairs(arr, size);

    return 0;
}