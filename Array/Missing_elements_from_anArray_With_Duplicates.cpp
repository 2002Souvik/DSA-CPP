#include<bits/stdc++.h>
using namespace std;
 
////TC: O(n) SC: O(1)

void findMissing(int *a, int n){
    // for(int i = 0; i<n; i++){
    //     int index = abs(a[i]);
    //     if(a[index -1] > 0){
    //         a[index - 1] *= -1;
    //     }
    // }

    // for(int i = 0; i<n; i++){
    //     if(a[i]>0){
    //         cout << i+1 << " ";
    //     }
    // }

    //// Sorting Swaping Method
    int i = 0;
    while(i<n){
        int index = a[i] - 1;
        if(a[i] != a[index]){
            swap(a[i], a[index]);
        }else{
            ++i;
        }
    }
    
    for(int i = 0; i<n; i++){
        if(a[i] != i+1){
            cout << i+1 << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    int a[] = {1,3,5,3,4};
    n = sizeof(a)/sizeof(a[0]);
    findMissing(a, n);
    return 0;
}