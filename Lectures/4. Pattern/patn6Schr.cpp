#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // char ch = 'A' + i;
        for (int j = i; j >= 1; j--)
        {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
    return 0;
}