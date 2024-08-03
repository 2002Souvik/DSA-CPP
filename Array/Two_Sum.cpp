#include<bits/stdc++.h>
using namespace std;

//// 1st type
bool checkTwoSum(int arr[], int n, int target){
    //check all pairs
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]+arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

//// 2nd type (pair Function )
//// tc-O(n^2), sc-(1)
pair<int, int> checkTwoSumUsingPair(int arr[], int n, int target){
    //assuming -1,-1 as no answer found
    pair<int, int>ans = make_pair(-1, -1); 
    // let's check all pairs
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            //found a pair that sums to target
            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
            return ans;
            }
        }
    }
    return ans;
}

//// 3rd type (array )
void checkTwoSumUsingArray(int arr[], int n, int target, int ans[]){
    // let's check all pairs
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            //found a pair that sums to target
            if(arr[i] + arr[j] == target){
                ans[0] = arr[i];
                ans[1] = arr[j];
            return ;
            }
        }
    }
    return ;
}

//// 3rd type (array )
void checkTwoSumPrintAllAnswers(int arr[], int n, int target){
    // let's check all pairs
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            //found a pair that sums to target
            if(arr[i] + arr[j] == target){
               cout << arr[i] << ", " << arr[j] << endl;
            }
        }
    }
    return ;
}

//// 4.Triplets
void printAllTriplets(int arr[], int n) {
    int count = 0;
    //TC- > n^3
    //SC -> O(1) space
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                count++;
            }
        }
    }
    cout << "Total triplets printed: " << count << endl;
}

//// 5. checkThreeSum
void checkThreeSum(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[i] + arr[j] + arr[k] == target) {
                    //ans found
                    cout << arr[i] << ", " << arr[j] <<", " << arr[k] << endl;
                }
            }
        }
    }
}

int main(){
    // int arr[] = {10, 80, 60, 20, 30, 70};
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 60;

    ////
    // checkThreeSum(arr, size, target);
    // printAllTriplets(arr, size);

    ////
    // checkTwoSumPrintAllAnswers(arr, size, target);

    ////
    // int ans[2] = {INT_MIN, INT_MIN};
    // checkTwoSumUsingArray(arr, size, target, ans);
    // cout << ans[0] << " " << ans[1] << endl;

    ////
    // pair<int, int> ans = checkTwoSumUsingPair(arr, size, target);
    // if(ans.first == -1 && ans.second == -1){
    //     cout << "Pair Not Found !" << endl;
    // }else{
    //     cout << "Pair Found: " << ans.first << ", " << ans.second << endl;
    // }

    ////
    // bool ans = checkTwoSum(arr, size, target);
    // if(ans){
    //     cout << "Pair Found" << endl;
    // }else{
    //     cout << "Pair Not Found" << endl;
    // }

    return 0;
}