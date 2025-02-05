#include<iostream>
#include<vector>
#include <limits.h>
#include<algorithm>

using namespace std;

int setMini(const vector<int>& arr){
    int mini = INT_MAX;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

int setMaxi(const vector<int>& arr){
    int maxi = INT_MIN;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main() {
    vector<int> arr = {4, 9, 6, 5, 2, 3};

    cout << "Minimum: " << setMini(arr) << endl;
    cout << "Maximum: " << setMaxi(arr) << endl;
}