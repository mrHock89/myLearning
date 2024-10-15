#include<iostream>
using namespace std;
int binToDecimal(int birNum){
    int ans = 0, pow = 1;
    while(birNum > 0){
        int rem = birNum % 10;
        ans += rem * pow;
        birNum /= 10;
        pow *= 2;
    }    
    return ans;
}

int main(){
    cout << binToDecimal(1010) << endl;
    return 0;
}