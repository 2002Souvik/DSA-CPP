#include <iostream>

using namespace std;

void findFirstOccurence(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans found -> may or may not be first occurence
            // store and compute
            ansIndex = mid;
            // kyoki first occurence ki baat hori hay
            // too left me jana padega
            e = mid - 1;
        }

        if (target > arr[mid])
        {
            // right me jao
            s = mid + 1;
        }
        if (target < arr[mid])
        {
            // left me jao
            e = mid - 1;
        }
        // ye main bhul jata hu
        mid = s + (e - s) / 2;
    }
}

void findLastOccurence(int arr[], int n, int target, int &ansIndex){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target) {
            //target k equal toh hai
            //but may or may not be last occurrance
            //store and compute
            ansIndex  = mid;
            //right me jao
            s = mid + 1;
        }
        if(target > arr[mid]) {
            //right me jao
            s = mid + 1;
        }
        if(target < arr[mid]) {
            //left me jao
            e = mid - 1;
        }
        //ye main bhul jata hun
        mid = s + (e-s)/2;
    }
}

int main()
{
    int arr[] = {20, 20, 20, 20, 20, 20, 20, 30, 40, 50, 60};
    int n = 11;
    int target = 20;
    //-1 means target not found
    int firstOccIndex = -1;
    findFirstOccurence(arr, n, target, firstOccIndex);
    cout << "First Occ Index: " << firstOccIndex << endl;
    int lastOccIndex = -1;
    findLastOccurence(arr, n, target, lastOccIndex);
    cout << "Last Occ Index: " << lastOccIndex << endl;
    cout << "Total no of Occ: " << lastOccIndex - firstOccIndex +1;
    return 0;
}