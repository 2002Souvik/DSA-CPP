#include<bits/stdc++.h>
using namespace std;

void print(vector<char> v){
  cout << "Vector Printing: " << endl;
  int size = v.size();
  for(int  i = 0 ; i<size; i++){
    // cout << v[i] << " ";
    cout << v.at(i) <<" ";
  }
}

void print(vector<int> v){
  cout << "Vector Print Method-2: " << endl;
  for(auto it:v){
    cout << it << " ";
  }
}

int main(){
  //// vector<int> v; // it just like an array
  //// in vector no need to tell size
  //// just keep inserting, i will manage the allocation.
  // vector<int> u;
  // u.push_back(10);
  // u.push_back(20);
  // u.push_back(30);
  // u.push_back(40);
  // u.push_back(50);
  // print(u);
  // cout<<endl;

  // vector<char> v;
  // v.push_back('s');
  // v.push_back('o');
  // v.push_back('u');
  // v.push_back('v');
  // v.push_back('i');
  // v.push_back('k');
  // print(v);

  // cout << endl;

  // cout << "Front Element: " << v[0] << endl;
  // cout << "Front Element: " << v.front() << endl;
  // cout << "End Element: " << v[v.size() - 1] << endl;
  // cout << "End Element: " << v.back() << endl;

  //// vector initialization
  // vector<int>arr; //default with bo data, 0 size
  // vector<int>arr2(5, -1); // with n size specific data
  // arr2.push_back(50);
  // print2(arr2);
  // cout<<endl;
  // print(arr2);

  // vector<int> arr3 = {1,2,3,4,5,6,7};
  // arr3.pop_back(); // to delete element 
  // print(arr3);

  //// Kow to coppy vector
  // vector<int> arr5 = {1,2,3,4,5,6,7};
  // vector<int> arr6(arr5);
  // print(arr6);

  //// insertion
  // vector<int> s;
  // int n; 
  // cin >> n;
  // for(int i = 0; i<n; i++){
  //   int d;
  //   cin >> d;
  //   s.push_back(d);
  // }
  // print(s);

  ////How to clear a vector
  vector<int> r={1,2,3,4,5,6,7};
  r.clear();
  r.push_back(50);
  print(r);
  ////pop
  cout<<endl;
  r.pop_back();
  print(r);



  return 0;
}