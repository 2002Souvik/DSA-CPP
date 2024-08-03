#include<bits/stdc++.h>
using namespace std;

bool search2DArray(int arr[][3], int rowSize, int colSize, int target) {

    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {

            if(arr[i][j] == target) {
                return true;
            }

        }
    }
    //agar line 13 tak pohoch gye
    //iska matlab dono loop traverse kar chuke ho
    //iska matlab entire array traverse kr chuke ho
    //iska matlab entire array me target nahi mila
    //iska matlab target not found
    //iska matlab return false
    return false;
}

int findMinimumIn2DArry(int arr[][3], int rowSize, int colSize){
    int minValue = INT_MAX;
    for(int i = 0; i<rowSize; i++){
        for(int j = 0; j<colSize; j++){
            minValue = min(arr[i][j], minValue);
        }
    }
    return minValue;
}

int findMaximumIn2DArray(int arr[][3], int rowSize, int colSize){
    int maxValue = INT_MIN;
    for(int i = 0; i<rowSize; i++){
        for(int j = 0; j<colSize; j++){
            maxValue = max(arr[i][j], maxValue);
        }
    }
    // overall I.C -> O(rowSize*colSize)
    // overall S.C -> O(1) space
    return maxValue; 
}

void printRowSum(int arr[][3], int rowSize, int colSize) {

    for(int i=0; i<rowSize; i++) {
        int sum = 0;
        //hr row k liye sum starting me 0 hai
        for(int j=0; j<colSize; j++) {
            sum = sum + arr[i][j];
        }
        //jab saare column k element add krliye hai
        //toh fer print krdo
        cout << sum << endl;
    }
    
}

void printColumnSum(int arr[][3], int rowSize, int colSize) {

    for(int col=0; col<colSize; col++) {
        //hr column k liye mere pass sum = 0 hona chahiye 
        int sum = 0;
        for(int row=0; row<rowSize; row++) {
            sum = sum + arr[row][col];
        }
        cout << sum << endl;
    }

}

void printDiagnolSum(int arr[][3], int rowSize, int colSize) {

    int sum = 0;
    
    for(int i=0; i<rowSize; i++) {
        sum = sum + arr[i][i];
    }
    
    cout << "Sum: " << sum << endl;

    // int sum = 0;
    // for(int i=0; i<rowSize; i++) {
    //     for(int j=0; j<colSize; j++) {
    //         if(i == j) {
    //             sum = sum + arr[i][j];
    //         }
    //     }
    // }
    // cout << "sum " << sum <<endl;
}

int main(){
    ////Declaring 2D array
    int arr[3][3] = {
        {10, 11, 12},
        {20, 22, 23},
        {30, 33, 34}
    };

    int rowSize = 3;
    int colSize = 3;

    //// Find Diagonalsum
    // printDiagnolSum(arr,rowSize,colSize);

    //// Find Column sum
    // printColumnSum(arr,rowSize,colSize); 

    ////Find Row sum of a Array
    // printRowSum(arr,rowSize,colSize); 

    //// Find Maximum In 2D Array
    // int maxAns = findMaximumIn2DArray(arr, rowSize, colSize);
    // cout << "Max Num: " << maxAns;

    //// Find Minimum In 2D Array
    // int minAns = findMinimumIn2DArry(arr, rowSize, colSize);
    // cout << "Min Num: " << minAns;

    ////Search 2D Array
    // int target = 12;
    // bool ans = search2DArray(arr,rowSize,colSize,target);
    // cout << "Ans is: " << ans << endl;

    //// Diagonal MAtrix -> Square Matrix

    //// Diagonal - Wise
    // for(int col=0; col<colSize; col++) {
    //     for(int row=0; row<rowSize; row++) {
    //         if(row == col){
    //             cout << arr[row][col] << " ";
    //         }
    //     }
    //     cout << endl;
    // } 

    ////Row - Wise
    // for(int rowIndex = 0; rowIndex<rowSize; rowIndex++){
    //     for(int colIndex = 0; colIndex<colSize; colIndex++){
    //         cout << arr[rowIndex][colIndex]<<" ";
    //     }
    //     cout << endl;
    // }

    ////Column - Wise
    // for(int col=0; col<colSize; col++) {
    //     for(int row=0; row<rowSize; row++) {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // } 

    ////Squre - Matrix
    // for(int r = 0; r<rowSize; r++){
    //     for(int c = 0; c<colSize; c++){
    //         // cout << "Printing " << c <<", "<< r << endl;
    //         cout << arr[c][r]<<" ";
    //     }
    //     cout << endl;
    // }


    // int arr[2][3];
    // int rowSize = 2;
    // int colSize = 3;

    // //// Taking 2D Array input
    // for(int i = 0; i<rowSize; i++){
    //     for(int j = 0; j<colSize; j++){
    //         cout << "Enter the value for (" << i << "," << j << ") : ";
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << "Printing 2D array: " << endl;
    // //row-wise
    // for(int rowIndex = 0; rowIndex<rowSize; rowIndex++){
    //     for(int colIndex = 0; colIndex<colSize; colIndex++){
    //         cout << arr[rowIndex][colIndex] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}