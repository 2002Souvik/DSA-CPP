#include<bits/stdc++.h>
using namespace std;

float KMtoMiles(float km){
    float _1KMtoMile = 0.621371;
    float miles = km * _1KMtoMile;
    return miles;
}

int main(){
    float km;
    cout<<"Tell me KM: ";
    cin>>km;
    float miles = KMtoMiles(km);
    cout<<"Miles= "<<miles;
    return 0;
}