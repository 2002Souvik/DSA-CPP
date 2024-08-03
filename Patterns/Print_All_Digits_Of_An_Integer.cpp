#include<bits/stdc++.h>
using namespace std;

void printDigits(int n){
    while(n!=0){
        cout<<n%10<<endl;
        n=n/10;
    }
}

int main(){
    int n;
    cin>>n;
    printDigits(n);
    return 0;
}