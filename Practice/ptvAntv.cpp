//  cpp program to check whether a number is posituve or negative
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number taht you want to check : ";
    cin >> num;
    cout << "Entered number is : " << num << endl;
    if(num >= 0) cout << num <<  " is a Positive number" << endl;
    else cout << num <<  " is a Negative number" << endl;
    return 0;

}