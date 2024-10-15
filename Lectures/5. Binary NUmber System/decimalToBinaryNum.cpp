// Convert DEcimal number to Binary number.
#include<iostream>
using namespace std;
int decmlToBnry(int decNum){
    cout << "Calculating DEcimal number : " << endl;
    // return 0;
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
    cout << "Enter the decimal number : " << "\n";
    cin >> decNum;
    cout << "Binary Number is : " << "\n" << decmlToBnry(decNum) << endl;
    return 0;
}