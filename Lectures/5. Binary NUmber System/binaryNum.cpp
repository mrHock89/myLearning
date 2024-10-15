#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int decNum;
    cout << "Enter the decimal number : " ;
    cin >> decNum;
    cout << "Binary number is : " << decToBinary(decNum) << endl;
    return 0;
}