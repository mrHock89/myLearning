// Sum of all numbers from 1 to N which are divisible by 3;
#include<iostream>
using namespace std;
int main(){
    int N = 15;
    int sum = 0;
    for(int i = 1; i <= N; i++){
        if(i % 3 == 0){
            sum = sum + i;
        }
    }
    cout << "Sum is : " << sum << endl;
    return 0;
}