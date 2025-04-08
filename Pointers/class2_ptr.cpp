#include<iostream>
#include<vector>
using namespace std;


void solve(int* arr, int size) {
    cout << sizeof(arr) << endl;
}

// void solve(vector<int> &v) {
//     cout << sizeof(v) << endl;
// }

int main() {

    // int a = 50;
    // int* p = &a;
    // int** q = &p;
    // int** r = q;

    // cout << **r << endl;



    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // solve(v);

    int arr[] = {10,20,30,40,50};
    int size = 5;
    
    solve(arr,size);

    ////
    // //2D array -> stack memory 
    // // int arr[2][4] = { 
    // //                 {2,4,6,8},
    // //                 {1,2,3,4}
    // //                 };

    // //2D array -> heap memory
    // // 4 -> row count
    // // 3 -> col count 
    // int** arr = new int*[4];

    // for(int i=0; i<4; i++) {
    //     //hr pointer k liye ek 1D array create krna h 
    //     arr[i] = new int[3];
    // }

    // //taking input 
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<3; j++) {
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << endl << "Printing the 2D array " << endl;
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<3; j++) {
    //         cout <<  arr[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    // for(int i=0; i<4; i++) {
    //     delete[] arr[i];
    // }



    // //array -> stack memory
    // // int arr[5] = {0};
    // // cout << arr[0] << arr[1] << arr[2] <<endl;

    // // //array - heap memory 
    // // int* brr =  new int[5];
    // // cout << brr[0] << brr[1] << brr[2] ;



    // //integer - > stack memory
    // // int a = 5 ;
    // // cout << a << endl;

    // // //integer -> Heap Memory 
    // // int* p = new int;
    // // *p = 5;
    // // cout << *p << endl;
    // // //deallocate -> delete keyword
    // // delete p;


    return 0;
}