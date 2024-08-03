#include<bits/stdc++.h>
using namespace std;

int bruteForce(int nums[], int size){
    //// T.C: O(n^2) S.C: O(1)
    for(int i = 0; i<size; ++i){
        int lsum = 0;
        int rsum = 0;

        // find lsum excluding current index;
        for(int j = 0; j<i; ++j){
            lsum += nums[j];
        }

        // find rsum excluding current index;
        for(int j = i+1; j<size; ++j){
            rsum += nums[j];
        }

        if(lsum == rsum){
            return i;
        }
    }
    return -1;
}

int prefixSumApproach(int nums[], int size){
    int lsum[size] = {0};
    int rsum[size] = {0};

    //cal. lsum array
    for(int i = 1; i<size; i++){
        lsum[i] = lsum[i-1] + nums[i-1];
    }

    //cal. rsum array
    for(int i = size-2; i>=0; i--){
        rsum[i] = rsum[i+1] + nums[i+1];
    }

    //check sum
    for(int i=0; i<size; i++){
        if(lsum[i] == rsum[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int nums[6] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << bruteForce(nums, size)<<endl;
    cout << prefixSumApproach(nums, size);
    return 0;
}