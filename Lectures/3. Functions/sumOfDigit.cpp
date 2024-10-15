#include<bits/stdc++.h>
using namespace std;

// Function definiation
int sumD(int n){
    int sum = 0;
    for(; n > 0; n = n / 10){
        sum = sum + (n % 10);
    }
    return sum;
}

int main(){
    cout << "Sum is " << sumD(145) << endl;
    return 0; 
}