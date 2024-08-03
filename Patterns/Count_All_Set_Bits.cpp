#include<bits/stdc++.h>
using namespace std;

int countSetBit(int n){
    // int count = 0;
    // while (n!=0)
    // {
    //     int bit = n%2;
    //     if(bit == 1){
    //         count++;
    //     }
    //     n=n/2;
    // }
    // return count; 

    int count = 0;
    while (n)
    {
        int bit = (n&1);
        if(bit){
            count++;
        }
        n>>=1;
    }
    return count; 
}

int main(){
    int n;
    cin>>n;
    int setBitCount = countSetBit(n);
    cout<<setBitCount;
    return 0;
}