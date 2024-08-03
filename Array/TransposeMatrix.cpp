#include<bits/stdc++.h>
using namespace std;

void transposeMatrix(int arr[][4], int rowSize, int colSize){

    //// trnspose in same array
    for(int i = 0; i<rowSize; i++){
        for(int j = i; j<colSize; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout<< " Printing the transpose "<<endl;
    for(int i = 0; i<rowSize; i++){
        for(int j = 0; j<colSize; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //// Store an another array
    // int ans[100][100] = {0};
    // for(int i = 0; i<rowSize; i++){
    //     for(int j = 0; j<colSize; j++){
    //         ans[i][j] = arr[j][i];
    //     }
    // }

    //cout<< " Printing the transpose "<<endl;
    // for(int i = 0; i<rowSize; i++){
    //     for(int j = 0; j<colSize; j++){
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    
}

int main(){
    int arr[4][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {11, 22, 33, 44},
        {55, 66, 77, 88}
    };

    int rowSize = 4;
    int colSize = 4;

    //// Find Transpose Matrix 
    transposeMatrix(arr, rowSize, colSize);

    return 0;
}