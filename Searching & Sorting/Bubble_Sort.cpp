#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    int n = v.size();
    for(int i = 0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &v){
    int n = v.size();
    for(int i=0; i<n-1; i++){
        for(int j = 0; j<n-i-1; i++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main() {
    vector<int> v = {9, 5, 7, 2, 3, 8, 1};
    bubbleSort(v);
    print(v);
    return 0;
}