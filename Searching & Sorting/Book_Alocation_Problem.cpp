#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

class Solution{
public:
    bool isPossibleSolution(int A[], int N, int M, int sol){
        int pageSum = 0;
        int c = 1;
        for(int i = 0; i < N; i++){
            if(A[i] > sol){
                return false;
            }
            if(pageSum + A[i] > sol){
                c++;
                pageSum = A[i];
                if(c > M){
                    return false;
                }
            } else {
                pageSum += A[i];
            }
        }
        return true;
    }

    // Function to find minimum number of pages.
    int findPages(int A[], int N, int M){
        if(M > N){
            return -1;
        }

        int start = 0;
        int end = accumulate(A, A + N, 0);
        int ans = -1;

        while(start <= end){
            int mid = (start + end) >> 1;
            if(isPossibleSolution(A, N, M, mid)){
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    // Predefined input data
    int N = 4;  // Number of books
    int M = 2;  // Number of students
    int A[] = {12, 34, 67, 90};  // Number of pages in each book
    
    Solution sol;
    int result = sol.findPages(A, N, M);
    
    if(result == -1){
        cout << "Not possible to allocate books to students." << endl;
    } else {
        cout << "The minimum number of pages that can be allocated is " << result << endl;
    }

    return 0;
}
