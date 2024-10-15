#include <iostream>
using namespace std;
int main()
{
    int marks[] = {99, 100, 58, 36, 88, 10};

    // for(int i = 0; i < sizeof(marks); i++){
    //     cout << marks[i];
    // }
    // cout << marks[0] << endl;;
    // cout << marks[1] << endl;;
    // cout << marks[2] << endl;;
    // cout << marks[3] << endl;;
    cout << marks[6] << endl;;
    // cout << sizeof(marks) << endl;
    // cout << sizeof(marks) / sizeof(int) << endl;
    // cout << sizeof(marks) / sizeof(marks[0]) << endl;

    for (int i = 0; i < sizeof(marks) / sizeof(int);i++)
    {
        cout << marks[i] << endl;
    }
    return 0;
}
// 24 * 8 = 160 + 32 = 192