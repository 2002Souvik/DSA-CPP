#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}

void selectionSort(vector<int> &v){
    int n = v.size();
    for(int i = 0; i<n-1; i++){
        int minIndx = i ; // ith element hi smallest hai
        for(int j=i+1; j<n; j++){
            if(v[j] > v[minIndx]){
                minIndx = j;
            }
        }

        swap(v[i], v[minIndx]); // swap ith and minindex element
    }
}

int main() {
    vector<int> v = {44, 33, 55, 22, 11};
    selectionSort(v);
    print(v);
    return 0;
}

