//  Checking a number is odd or even
#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number " <<  endl;
    cin >> a;
    cout << "The value of a is : " << a << endl;
    if(a % 2 == 0){
        cout << a << " is a even number.";
    }
    else {
        cout << a  << " is a odd nmumber."; 
    };

    return 0;
}