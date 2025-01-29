#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    
    // Total number of elements in the matrix
    int n = row * col;
    
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    
    while (s <= e) { 
        // Use mid to find the corresponding row and column index
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if (matrix[rowIndex][colIndex] == target) {
            return true;
        }
        
        if (target > matrix[rowIndex][colIndex]) {
            // Move right
            s = mid + 1;
        } else {
            // Move left
            e = mid - 1;
        }
        
        mid = s + (e - s) / 2;
    }
    
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    
    int target = 3;
    
    if (searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
