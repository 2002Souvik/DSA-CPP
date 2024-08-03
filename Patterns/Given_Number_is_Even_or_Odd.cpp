#include<bits/stdc++.h>
using namespace std;

bool checkEven(int n){
    // if(n%2 == 0){
    if((n&1) == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    bool isEven = checkEven(n);
    if(isEven){
        cout<<n<<" is Even Number.\n";
    }else{
        cout<<n<<" is Odd Number.\n";
    }
    return 0;
}