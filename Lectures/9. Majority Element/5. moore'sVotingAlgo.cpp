#include <iostream>
#include <vector>
using namespace std;
int mejorityElement(vector<int> arr)
{
    int feq = 0, ans = 0;
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        if (feq == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            feq++;
        }
        else
        {
            feq--;
        }
    }
    // enception case
    int count = 0;
    for (int val : arr)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return ans;
    }
    else
    {

        return -1;
    }
}

int main()
{
    vector<int> myArr = {1, 2, 2, 1, 1, 2, 2};
    int result = mejorityElement(myArr);
    (result == -1)
        ? cout << "Mejority Element is not found." << endl
        : cout << "Mejority Element is : " << result << endl;
        
    return 0;
}