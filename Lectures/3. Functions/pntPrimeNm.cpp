#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    cout << "Enter the value of N : ";
    cin >> N;
    cout << "Prime numbers from 2 to " << N << " are: ";
    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    // primeCk(n);
    return 0;
}