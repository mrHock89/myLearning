#include <iostream>
#include <vector>
using namespace std;

vector<int> findPair(int *arr, int size, int target) // O(n^2)
{
    // int size = sizeof(arr) / sizeof(int);
    vector<int> pairArr;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] + arr[j] == target){
                pairArr.push_back(i);
                pairArr.push_back(j);
                return pairArr;
            }
        }
    }
    return pairArr;
}

int main(){
    int arr[] = {2, 7, 11, 15};
    int target = 18;
    int size = sizeof(arr) / sizeof(int);
    vector<int> ans = findPair(arr, size, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}
