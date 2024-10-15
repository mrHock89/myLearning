#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_n_r = fact(n-r);
    return fact_n / (fact_n_r * fact_r);
}
int main(){
    int n, r;
    cin >> n;
    cin >> r;
    
    cout << "Binomial Coefficient is " << nCr(n,r) << endl;
    return 0;
}