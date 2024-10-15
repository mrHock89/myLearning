#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int num;
    int num2;
    cin >> num;
    cin >> num2;
    cout << "Factorial of " << num << " is " << fact(num) << endl;
    cout << "Factorial of " << num2 << " is " << fact(num2) << endl;
    return  0;
}
