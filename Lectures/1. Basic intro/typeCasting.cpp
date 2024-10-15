// Type conversion is implecit and type Casting is explicit
#include<iostream>
using namespace std;
int main(){
    cout << "Type Conversion\n";
    char name = 'M';
    cout << name << endl << sizeof(name) << endl;
    int name_conv = name;
    cout << name_conv << endl << sizeof(name_conv) << endl;

    cout << "Type Casting\n";
    double PI = 3.14;
    cout << PI << endl << sizeof(PI) << endl;
    int name_conv2 = name;
    cout << name_conv2 << endl << sizeof(name_conv2) << endl;
}