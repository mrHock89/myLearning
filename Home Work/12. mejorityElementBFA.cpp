// Find mejority Element without using Moore's Algo
#include <iostream>
#include <vector>
using namespace std;
int mejorityElement(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > (arr.size() / 2))
        {

            return arr[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> myArr = {1, 2, 2, 2, 1, 1};
    int result = mejorityElement(myArr);
    (result == -1)
        ? cout << "Mejority element is not found." << endl
        : cout << "Mejority element is : " << result << endl;
    return 0;
}
