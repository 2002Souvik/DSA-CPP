#include <iostream>
#include <vector>
using namespace std;

class ArrayModifier {
public:
    // Function to move all negative elements to the end while maintaining the order of positive elements
    void moveNegativesToEnd(vector<int>& arr) {
        int n = arr.size();
        int posIndex = 0;  // This will track the position where the next positive element should go
        vector<int> result(n); // A new array to store the result
        
        // First, copy positive elements to the result array
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                result[posIndex++] = arr[i];
            }
        }
        
        // Then, copy negative elements to the result array
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                result[posIndex++] = arr[i];
            }
        }

        // Copy the result back into the original array
        arr = result;
    }

    // Function to print the array
    void printArray(const vector<int>& arr) {
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    // Sample input
    vector<int> arr = {1, -1, 3, 2, -7, -5, 11, 6};
    
    // Creating an instance of the class
    ArrayModifier modifier;
    
    // Moving negative elements to the end
    modifier.moveNegativesToEnd(arr);
    
    // Printing the modified array
    cout << "Modified Array: ";
    modifier.printArray(arr);
    
    return 0;
}
