#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    int i =2;
    for(i=2; i<=sqrt(n); i++){
        if(n%1 == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i = 2; i<=n; i++){
        bool isiPrime = checkPrime(i);
        if(isiPrime){
            cout<<i<<" ";
        }
    }
    return 0;
}