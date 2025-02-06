//// leetcode: 658. Find K Closest Elements
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
        int l = 0, h = arr.size()-1;
        while(h-l>=k){
            if(x-arr[l] > arr[h]-x){
                l++;
            }else{
                h--;
            }
        }
        vector<int> ans;
        for(int i = l; i<=h; i++){
            ans.push_back(arr[i]);
        }
        return ans;

        // return vector<int>(arr.begin()+l, arr.begin()+h+1);
    }

    ////Using binary search
    int lowerBound(vector<int>&arr, int x){
        int start = 0, end = arr.size()-1;
        int ans = end;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid] >= x){
                ans = mid;
                end=mid-1;
            }else if(x>arr[mid]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }

    vector<int> bc_method(vector<int>& arr, int k, int x){
        //lower bound.
        int h = lowerBound(arr, x);
        int l = h-1;
        while(k--){
            if(l < 0){
                h++;
            }else if(h>=arr.size()){
                l--;
            }else if(x-arr[l] > arr[h] - x){
                h++;
            }else{
                l--;
            }
        }
        return vector<int>(arr.begin()+l+1, arr.begin()+h);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // return twoPtrMethod(arr, k, x);
        return bc_method(arr, k, x);
    }
};

int main() {
    Solution solution;
    
    // Example 1
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int k1 = 4, x1 = 3;
    vector<int> result1 = solution.findClosestElements(arr1, k1, x1);
    cout << "Closest elements for example 1: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Example 2
    vector<int> arr2 = {1, 2, 3, 4, 5};
    int k2 = 4, x2 = -1;
    vector<int> result2 = solution.findClosestElements(arr2, k2, x2);
    cout << "Closest elements for example 2: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}