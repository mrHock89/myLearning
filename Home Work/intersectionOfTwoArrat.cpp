// WAF to print intersection of 2 arrays.

#include <iostream>
using namespace std;
void intersection2Arr(int arr1[], int arr2[], int sizeOfarr1, int sizeOfarr2)
{
    for (int i = 0; i < sizeOfarr1; i++)
    {
        for (int j = 0; j < sizeOfarr2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int myArr1[] = {1, 2, 3, 4, 5, 7, 8}, myArr2[] = {3, 1, 6, 7};
    int sizeOfArr1 = 7;
    int sizeOfArr2 = 4;
    cout << "Intersection of 2 array is : " << endl;
    intersection2Arr(myArr1, myArr2, sizeOfArr1, sizeOfArr2);
    return 0;
}