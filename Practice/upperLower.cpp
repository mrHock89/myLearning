#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter char : ";
    cin >> ch;
    if(isdigit(ch)){
        cout << ch << " is a Digit" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch  << " is Lowercasr";
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        cout << ch  << " is Uppercase" << endl;
    }
    else {
        cout << ch  << " is Other character" << endl;
    }
    return 0;
    
}