#include<bits/stdc++.h>
using namespace std;
void primeCk(int n){
    for(int i = 2; i * i <= n; i++){
        if(n <= 0){
            cout << n << " is not a Prime number" << endl;
            break;
        }
        else if(n % i == 0){
            cout << n << " is not a Prime number" << endl;
            break;
        }
        else {
            cout << n << " is a Prime number" << endl;
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    primeCk(n);
    return 0;
}