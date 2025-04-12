 #include<iostream>
 
using namespace std;

int main() {
    //// Q.1) 
    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << "/n";

    //// Q.2)
    // int a = 7;  
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout << a << " " << b << endl;

    //// Q.3)
    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout << *ptr << endl;

    //// Q.4)
    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout << a << " " << *c << endl;

    //// Q.5)
    int a = 7; 
    int *c = &a;
    c = c + 3;
    cout << c << endl;


    return 0;
}