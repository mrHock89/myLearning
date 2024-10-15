#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &myArr, int target)
{
    for (int i = 0; i < myArr.size(); i++)
    {
        if (myArr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> myArr = {3, 2, 10, 8, 4, 6};
    int target = 5;
    int result = linearSearch(myArr, target);
    (result == -1)
        ? cout << "Element is not found."
        : cout << "Element is found at index : " << result;
    cout << endl;
    for(int i: myArr){
        cout << i << " ";
    }
    cout << endl;
}