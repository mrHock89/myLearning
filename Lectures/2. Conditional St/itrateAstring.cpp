#include<iostream>
using namespace std;
int main(){
    string str = "Hello World!";
    for(char c : str){
        cout << c << endl;
    }
    cout << endl;
    return 0;
}