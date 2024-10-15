// Finding length of a string without suing strlen() method
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    string myStr = "Hello World!";
    int length = 0;
    for(int i = 0; myStr[i] != '\0'; i++){
        length++;
    }
    cout << "The length of the string is: " << length << endl;
    return 0;
}