// Coonvert BInary number to Decimal Number in c++
#include<iostream>
using namespace std;
int bnryTodecml(int bnryNum){
    int ans = 0, pow = 1;
    while(bnryNum > 0){
        int rem = bnryNum % 10;
        ans = ans + (rem * pow);
        bnryNum = bnryNum / 10;
        pow = pow * 2;
    }
    return ans;
}

int main(){
    int bnryNum;
    cout << "Enter the binary number : " ;
    cin >> bnryNum;
    cout << "Decimal NUmber is : " << bnryTodecml(bnryNum) << endl;
    return 0;
}