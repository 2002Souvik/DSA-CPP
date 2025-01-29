// Given two integers one is a dividen and the other is the diviser, We need to find the quotient when the dividend is divisor without the use of any " / " & " % " operators

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.333.. which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10/-2 = -5

#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor) {
    //
    int s = 0;
    int e = dividend;
    int mid = s + ((e-s)>>1);
    int ans = -1;

    while(s <= e){
        if((divisor * mid) == dividend){
            return mid;
        }
        if((divisor*mid)<dividend){
            //store and compute
            ans = mid;
            s = mid+1;
        }else{
            //left
            e = mid-1;
        }
        mid = s + ((e-s)>>1);
    }
    return ans;
}

int main(){
    int dividend = 10;
    int divisor = -2;

    //mission is to find Quotient
    int ans  = getQuotient(abs(dividend), abs(divisor));
    if((dividend < 0 && divisor>0) || (dividend > 0 && divisor < 0)){
        ans = 0 - ans;
    }
    cout << "Final Ans: " << ans << endl;
}