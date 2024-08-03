#include<bits/stdc++.h>
using namespace std;

int main(){
    ////// Different Methods of Swap
    int a = 5, b = 7;

    //// 1. swap inbuilt fun..
    // swap(a,b);

    //// 2. temp variable..
    // int temp = a; // temp will  be 5
    // a = b; // a will be 7
    // b = temp; // b will  be 5

    //// 3. arithmatic  method, interview question ? ?
    // a = a + b; // sum of a & b storing in a, a = 12, b = 7
    // b = a - b; // subtracting b from new a gives initial value of a, a = 12, b = 5
    // a = a - b; // subtracting new b from new a gives initial value of b... a = 7, b = 5

    //// 4. XOR bitwise method, interview question ? ?
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    
    //// Print after swap:
    cout << "a: " << a << ", b: " << b;
    
    return 0;
}