#include <bits/stdc++.h>
using namespace std;
int sumN(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    return 0;
}
