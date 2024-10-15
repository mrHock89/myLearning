// Kadane's Algorithm
#include<iostream>
#include<climits>
using namespace std;
int main(){
    // int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int arr[] = {-1, -2, -3, -4, -5};
    // int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int currentSum = 0;
    int maxSum = INT_MIN;
    int n = sizeof(arr) / sizeof(int);
    cout << "Size of the Array : " << n << endl;;
    for(int i = 0; i < n; i++){
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0)
        currentSum = 0;
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}