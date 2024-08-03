#include <iostream>
#include<vector>
using namespace std;

//// Array by default pass by referance hota hay and in vector pass by value hota hay & add karne se pass by referance hojata hay 

bool search2DArray(vector<vector<int> > arr, int target){
  int rowSize = arr.size();
  int colSize = arr[0].size();

  for(int i=0; i<rowSize; i++) {
    for(int j=0; j<colSize; j++) {

      if(arr[i][j] == target ){
        return true;
      }

    }
  }
  return false;
}

int main() {
  vector<vector<int> > arr(4, vector<int>(3,0));
  int rowSize = arr.size();
  int colSize = arr[0].size();
  
  for(int i=0; i<rowSize; i++) {
    for(int j=0; j<colSize; j++) {
      cin >> arr[i][j];
    }
  }

  int target = 40;

  bool ans = search2DArray(arr,target);
  cout << "ans: " << ans << endl;


  return 0;
}