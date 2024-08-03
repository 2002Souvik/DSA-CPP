#include<bits/stdc++.h>
using namespace std;

int getMultiplication(int x, int y, int z){
    int result = x * y * z;
    return result;
}

void printNameTenTimes(){
    for(int i = 1; i<=10; i++){
        cout << "Souvik" << endl;
    }
}

void printMultiplies(int num){
    for(int i=1; i<=10; i++){
        cout << num * i << endl;
    }
}

int convertIntoCelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

char convertIntoUpperCase(char ch){
    char answers = ch - 'a' + 'A';
    return answers;
}

int main(){
    // Function Call
    //getMultiplication()
    // int multiplicationAnswers = getMultiplication(5 , 10 , 2);
    // cout << multiplicationAnswers << endl;

    // printNameTenTimes();

    // int m = 5;
    // printMultiplies(m);

    // int far = 32; 
    // int  ans =convertIntoCelcius(far);
    // cout << "IN Calcius: " << ans << endl;

    char result = convertIntoUpperCase('k');
    cout << result << endl;

    return 0;
}