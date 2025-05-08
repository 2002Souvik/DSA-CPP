#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int arraysEqualorNot(vector<int> A, vector<int> B) {
    if (A.size() != B.size()) return 0;

    unordered_map<int, int> freqA, freqB;

    for (int num : A) freqA[num]++;
    for (int num : B) freqB[num]++;

    return freqA == freqB ? 1 : 0;
}

int main() {
    int n; // size of arrays
    cout << "Enter size of arrays: ";
    cin >> n;

    //// 3 a = 11 12 13  b = 12 11 13

    vector<int> A(n), B(n);
    cout << "Enter elements of first array:\n"; 
    for (int i = 0; i < n; i++) cin >> A[i]; 

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n; i++) cin >> B[i];

    if (arraysEqualorNot(A, B))
        cout << "Arrays are equal (same elements with same frequencies)" << endl;
    else
        cout << "Arrays are NOT equal" << endl;

    return 0;
}
