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
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout<<"Prime\n";
    }else{
        cout<<"Not A Prime\n";
    }
    return 0;
}