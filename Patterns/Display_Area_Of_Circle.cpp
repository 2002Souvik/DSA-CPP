#include<bits/stdc++.h>
using namespace std;

float circleArea(float radius){
    return 3.14*radius*radius;
}

int main(){
    float radius;
    cin>>radius;
    float area = circleArea(radius);
    cout<<"Area of Circle is: "<<area<<endl;
    return 0;
}