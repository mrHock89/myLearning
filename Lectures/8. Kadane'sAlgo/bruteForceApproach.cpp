#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n = 5;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;
    cout << maxSum << endl;
    for(int st = 0; st < n; st++){
        int currentSum = 0;
        for(int end = st; end < n; end++){
            currentSum = currentSum + arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "Max subarray sum = " << maxSum << endl;
    return 0;
}