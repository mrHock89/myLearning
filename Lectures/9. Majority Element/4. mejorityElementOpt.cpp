#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mejorityElement(vector<int> arr)
{
    // sort the array
    sort(arr.begin(), arr.end()); // O(nlogn)

    // frequency check
    int frequency = 1, ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            ans = arr[i];
        }
        if (frequency > (arr.size() / 2))
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> myArr = {1, 2, 2, 1, 1, 1, 2};
    int result = mejorityElement(myArr);
    cout << "Mejority Element is : " << result << endl;
    return 0;
}