////
#include<bits/stdc++.h>
using namespace std;

int decimalToBinaryMethod(int n){
    // Division Method
    while(n > 0){
        int bit = n % 2;
        cout << bit;
        n = n / 2;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int binary = decimalToBinaryMethod(n);
    return 0;
}

////
// #include<bits/stdc++.h>
// using namespace std;

// int decimalToBinaryMethod1(int n){
//     // Division Method
//     int binaryno = 0;
//     int  i = 0;
//     while(n > 0){
//         int bit = n % 2; 
//         binaryno = bit*pow(10, i++) + binaryno;
//         n = n / 2;
//     }
//     return binaryno;
// }

// int main(){
//     int n;
//     cin >> n;
//     int binary = decimalToBinaryMethod1(n);
//     cout << binary << endl;
//     return 0;
// }

////
// #include<bits/stdc++.h>
// using namespace std;

// int BitwiseMethod(int n){
//     int binaryno = 0;
//     int i = 0;
//     while(n>0){
//         int bit = (n & 1);
//         binaryno = bit*pow(10, i++)+binaryno;
//         n = n >> 1;
//     }
//     return binaryno;
// }

// int main(){
//     int n;
//     cin >> n;
//     int binary = BitwiseMethod(n);
//     cout << binary << endl;
//     return 0;
// }

////
// #include<bits/stdc++.h>
// using namespace std;

// int BinaryToDecimal(int n){
//     int decimal = 0;
//     int i = 0;
//     while(n){
//         int bit = n % 10;
//         decimal = decimal + bit*pow(2, i++);
//         n = n / 10;
//     }
//     return decimal;
// }

// int main(){
//     int binary;
//     cin >> binary;
//     cout << BinaryToDecimal(binary); 
//     return 0;
// }

