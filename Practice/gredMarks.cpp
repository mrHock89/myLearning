// Giviing greade according to ther number
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks: " << endl;
    cin >> marks;
    cout << "Mark is : " << marks << endl;
    if (marks >= 90)
    {
        cout << "AA" << endl;
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "A+" << endl;
    }
    else if (marks >= 60 && marks < 80)
    {
        cout << "A" << endl;
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "B" << endl;
    }
    else if (marks >= 40 && marks < 50)
    {
        cout << "C" << endl;
    }
    else if (marks >= 35 && marks < 40)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
    return 0;
}