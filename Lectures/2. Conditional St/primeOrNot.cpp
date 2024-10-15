// #include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;

    for (int i = 2; i * i <= num; i++)
    {
        if (num <= 1)
        {
            cout << "Not a prime number." << endl;
            // return 0;
        }
        else if (num % i == 0)
        {
            cout << "Not a prime number." << endl;
            // return 0;
            break;
        }
        else
        {
            cout << "Is a prime number." << endl;
            // return 0;
            break;
        }
    }

    return 0;
}