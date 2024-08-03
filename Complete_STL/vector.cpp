#include<bits/stdc++.h>
using namespace std;

int main(){
    ////creation
    vector<int> marks;

    // marks.reserve(10);
    // cout << marks.max_size() << endl;
    

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    // marks.clear();

    // marks.insert(marks.begin(), 50);

    // cout<<marks.size()<<endl;

    // marks.erase(marks.begin(), marks.end());

    // cout<<marks.size()<<endl;

    // cout << marks[0] << endl;
    // cout << marks.capacity() << endl;

    // cout << marks[3] << endl;
    // cout << marks.at(0) << endl;

    // marks[0] = 100;
    // cout << marks[0] << endl;

    cout << "Size: " << marks.size() << endl;

    return 0;
}