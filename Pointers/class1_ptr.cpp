#include<iostream>
using namespace std;

int main(){
    // int a = 5;
    // int* iptr = &a;
    // cout << sizeof(iptr) << endl;
    
    // char ch = 'a'; 
    // char* cptr = &ch;
    // cout << sizeof(cptr) << endl;

    // float f = 1.4;
    // float* fptr = &f;
    // cout << sizeof(fptr) << endl;

    // int a = 5;
    // int* ptr;
    // cout << *ptr << endl;

    // int a = 5;
    // int* p = &a;
    // //copying pointers
    // int* q = p;

    // cout << "a: " << a << endl;
    // cout << "&a: " << &a << endl;
    // // cout << "*a: " << *a << endl;
    // cout << "p: " << p << endl;
    // cout << "&p: " << &p << endl;
    // cout << "*p: " << *p << endl;
    // cout << "q: " << q << endl;
    // cout << "&q: " << &q << endl;
    // cout << "*q: " << *q << endl;

    // char ch[100] = "love";
    // cout << "base address: " << &ch << endl;
    // char* cptr = ch;
    // cout << cptr << endl;

    char ch[100] = "Souvik";
    char* cptr = ch;

    cout << "ch : " << ch << endl;
    cout << "&ch : " << &ch << endl;
    cout << "ch[0] :" << ch[0] << endl;
    cout << "&cptr : " << &cptr << endl;
    cout << "*cptr : " << *cptr << endl;
    cout << "*(cptr+3) : " << *(cptr+3) << endl;
    // galti hota nai ismain dhyn rakna hai 
    cout << "cptr : " << cptr << endl;

    return 0;
}