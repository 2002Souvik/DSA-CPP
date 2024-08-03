#include<bits/stdc++.h>
using namespace std;

int findUniqueNumber(int arr[], int n){
    int ans = 0;
    //To find the final answer, we need to XOR all the numbers in the array
    for(int i = 0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {10, 20, 10, 60, 20, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = findUniqueNumber(arr, size);
    cout << "Unique Number Is: " << ans << endl;
    return 0;
}