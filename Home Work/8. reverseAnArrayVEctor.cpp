// Reverse an array as vector in cpp

#include<iostream>
#include<vector>
using namespace std;

void reverseVector(vector<int> &myArr){
    int start = 0, end = myArr.size() - 1;
    for(; start < end; start++, end-- ){
        swap(myArr[start], myArr[end]);
    }
    // for(int i : myArr){
    //     cout << i << " ";
    // }
    // cout << endl;
}

int main(){
    vector<int> myArr = {2, 4, 8, 10, 12};
    reverseVector(myArr);
    for(int i : myArr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}