#include<bits/stdc++.h>
using namespace std;

bool keyPair(int arr[], int n, int target){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

//// Two Pointer Approach
bool twoSum(int arr[], int n, int target){
    int l = 0;
    int h = n-1;
    while(l<h){
        int csum = arr[l] + arr[h];
        if(csum == target){
            return true;
        }else if(csum > target){
            h--;
        }else{
            l++;
        }
    }
    return false;
}

int main(){
    int arr[9] = {15,6,1,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 16;
    int result = keyPair(arr, size, target);
    cout << "The result is: "<< result << endl;
    sort(arr, arr+size);
    int ans = twoSum(arr, size, target);
    cout<< "Ans is: "<< ans;
    return 0;
}