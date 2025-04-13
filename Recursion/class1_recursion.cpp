#include<iostream>
#include<vector>
using namespace std;

int getSum(int n) {
    //base case
    if(n == 1) {
        return 1;
    }
    //recursive relation
    //sum(n) = sum(n-1) + n;
    int ans = getSum(n-1) + n;
    return ans;
    //processing
}

int fib(int n){
    //base case
    if(n == 0 || n == 1) {
        return n;
    }
    //recursive relation
    //fib(n) = fib(n-1) + fib(n-2);
    int ans = fib(n-1) + fib(n-2);
    return ans;
    //processing    
}

int pow(int n) {
    //base case
    if(n == 0) {
        return 1;
    }
    //recursive relation 
    //pow(n) = 2 * pow(n-1);
    int recKaAns = pow(n-1);
    int finalAns = 2 * recKaAns;
    return finalAns;
    //processing 
}

// print counting from n to 1 
void printCounting(int n) {
    //base case
    if(n == 0) {
        return;
    } 
    
    //processing
    cout << n << " "; 
    //recursive call 
    printCounting(n-1);
}

int getFactorial(int n) {
    //base case - mandatory
    if(n == 0 || n == 1) {
        return 1;
    }
    //recursive call - mandatory
    //fact(n) = n * fact(n-1);
    //recursion -> fact(n-1);
    int recursionKaAns = getFactorial(n-1);
    int finalAns = n * recursionKaAns;
    return finalAns;
    //processing - optional 
}


int main() {
    cout << getSum(5) << endl; // 15
    cout << fib(5) << endl; // 5
    cout << pow(5) << endl; // 32
    printCounting(5); // 5 4 3 2 1
    cout << endl;
    
    // int n;
    // cout << "Enter the value of n: " ;
    // cin >> n;

    int ans = getFactorial(3);
    cout << "Factorial of " << "3" << " is: " << ans << endl;


    return 0;
}