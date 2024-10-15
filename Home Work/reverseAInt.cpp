// Write a Cpp program to reverse a number 152 >> 251

#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int revNum = 0;
    for(num; num > 0;){
        int rem = num % 10;
        num = num / 10;
        revNum = revNum * 10 + rem;
    }
    cout << " Reverse Number is : " << revNum << endl;
    return 0;
}