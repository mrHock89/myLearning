// Find the sum of all odd numbers from 1 to N
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N; 
    int sum = 0;
    cout << "Enter the value of N: " << endl;
    cin >> N;
    cout << "The value of N is : " << N << endl;
    for (int i = 1; i <= N; i++){
        if(i % 2 != 0){
            cout << i << endl;
            sum = sum + i;
        }
    } 
    cout << "The sum of all odd number is : " << sum << endl;
    return 0;
}