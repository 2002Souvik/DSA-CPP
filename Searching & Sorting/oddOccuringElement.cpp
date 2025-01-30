//// Leetcode: 540
//// Odd Occuring Element
// a) all element occurs even number of times except one
// b) element repeats itself in pairs
// c) no pair repeats itself, no number can occur more than 2 times in a single stretch
// d) find element that occur odd times

#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[], int size) {
    int s = 0;
    int e = size - 1;
    int mid = s+(e-s)/2;

    while(s<=e) {
        //single element
        if(s==e){
            //yehi element odd wala element hai
            //return kardo 
            return s;
        }
        //duplicate does not exist
        int leftValue = -1;
        int rightValue = -1;
        int currentValue = arr[mid];
        if(mid-1>=0){
            leftValue = arr[mid-1];
        }
        if(mid+1>=size){
            rightValue = arr[mid+1];
        }
        if(currentValue != leftValue && currentValue != rightValue) {
            return mid;
        }
        //duplicate exist in left index
        if(mid-1 >= 0 && arr[mid] == arr[mid-1]) {
            int pairStartingIndex = mid-1;
            if(pairStartingIndex & 1){
                //pair starting index is odd 
                //i am string at right part 
                //move to left
                e = mid - 1;
            }else{
                //pairIndex even h
                //standing at left part
                //move to right part
                s = mid + 1;
            }
        }
        //duplicate exist in right wala index
        else if(mid+1 < size && arr[mid] == arr[mid+1]){
            int pairStartingIndex = mid;
            if(pairStartingIndex & 1) {
                //pair starting index is odd 
                //i am string at right part 
                //move to left
                e = mid - 1;
            }else{
                //pairIndex even h
                //standing at left part
                //move to right part
                s = mid + 1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,2,3,3};
    int size = 5;
    // find the odd occuring element

    int ans = findOddOccuringElement(arr, size);
    cout << "Ans Index: " << ans << endl;
    cout << "Ans Element: " << arr[ans] << endl;

    return 0;
}